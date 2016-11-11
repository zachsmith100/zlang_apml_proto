
#include "Common.h"
#include "UnorderedVarDeclarations.h"
#include "CodeTemplates.h"
#include "CodeGenerator.h"
#include <assert.h>
#include "Classes.h"

CUnorderedVarDeclarations::CUnorderedVarDeclarations():
	m_scopeLevel(0)
{

}

CUnorderedVarDeclarations::CUnorderedVarDeclarations(const CUnorderedVarDeclarations&)
{
	assert(false);
}

CUnorderedVarDeclarations* CUnorderedVarDeclarations::GetInstance()
{
	static CUnorderedVarDeclarations* obj = NULL;

	if (!obj)
	{
		obj = new CUnorderedVarDeclarations();
	}

	return obj;
}

bool CUnorderedVarDeclarations::IsEmpty()const
{
	return (m_parts.size() == 0);
}

void CUnorderedVarDeclarations::AddVariable(const std::string& varName)
{
	SUnorderedPart* part = new SUnorderedPart(varName, UPT_VARIABLE);
	m_parts.push_back(part);
}

void CUnorderedVarDeclarations::AddCode(const std::string& code)
{
	SUnorderedPart* part = new SUnorderedPart(code, UPT_CODE);
	m_parts.push_back(part);
}

void CUnorderedVarDeclarations::ClearAll()
{
	std::vector<SUnorderedPart *>::iterator it = m_parts.begin();
	std::vector<SUnorderedPart *>::iterator itEnd = m_parts.end();

	for ( ; it != itEnd; it++)
	{
		delete *it;
	}

	m_parts.clear();
}

void CUnorderedVarDeclarations::SetScopeLevel(const unsigned int scopeLevel)
{
	m_scopeLevel = scopeLevel;
}

std::string CUnorderedVarDeclarations::GetScopeLevelString()const
{
	std::string str = "";
	int scopeLevel = Classes::GetInstance()->GetCurrentClass() ? m_scopeLevel + SCOPE_OFFSET : m_scopeLevel;
	for (int i = 0; i < scopeLevel; i++)
	{
		str += "\t";
	}
	return str;
}

std::string CUnorderedVarDeclarations::GetDeclarationsString()const
{
	USE_TPL(variables, outOfOrderDeclaration);
	USE_INDEX(outOfOrderDeclaration, tabLevel);
	outOfOrderDeclarationTpl->SetVariableValue(tabLevelIndex, GetScopeLevelString());	

	std::string str = "";

	std::vector<SUnorderedPart *>::const_iterator it = m_parts.begin();
	std::vector<SUnorderedPart *>::const_iterator itEnd = m_parts.end();

	for ( ; it != itEnd; it++)
	{
		switch ((*it)->type)
		{
		case UPT_CODE:
			str += (*it)->part;
			str += "; ";
			break;

		case UPT_VARIABLE:
			USE_INDEX(outOfOrderDeclaration, variable);	
			outOfOrderDeclarationTpl->SetVariableValue(variableIndex, (*it)->part);
			str += outOfOrderDeclarationTpl->GetText();	
			break;
		}
	}
	
	return str;
}

void CUnorderedVarDeclarations::operator =(const CUnorderedVarDeclarations&)
{
	assert(false);
}

CUnorderedVarDeclarations::~CUnorderedVarDeclarations()
{
}