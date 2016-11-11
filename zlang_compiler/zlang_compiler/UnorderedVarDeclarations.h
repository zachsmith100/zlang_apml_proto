
#pragma once

#include <string>
#include <vector>

enum UnorderedPartType
{
	UPT_VARIABLE = 0,
	UPT_CODE
};

struct SUnorderedPart
{
	std::string part;
	UnorderedPartType type;

	SUnorderedPart(std::string part_, UnorderedPartType type_)
	{
		part = part_;
		type = type_;
	}
};

class CUnorderedVarDeclarations
{
public:
	static CUnorderedVarDeclarations* GetInstance();

	void SetScopeLevel(const unsigned int scopeLevel);
	
	void AddVariable(const std::string& varName);
	void AddCode(const std::string& code);
	void ClearAll();

	bool IsEmpty()const;

	std::string GetDeclarationsString()const;	

private:
	CUnorderedVarDeclarations();
	CUnorderedVarDeclarations(const CUnorderedVarDeclarations& other);
	void operator =(const CUnorderedVarDeclarations& other);
	~CUnorderedVarDeclarations();

	std::string GetScopeLevelString()const;

	std::vector<SUnorderedPart *> m_parts;

	unsigned int m_scopeLevel;
};