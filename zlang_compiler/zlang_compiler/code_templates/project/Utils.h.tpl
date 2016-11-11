
#pragma once

#include <string>

#ifdef WIN32
#define sprintf sprintf_s
#endif

void ParseExePath(const std::string& exePath, std::string& exeDir, std::string& exeName);
bool IsFloat(const std::string& str);
bool IsStringConvertableToInt(const std::string& str);
bool IsStringConvertableToFloat(const std::string& str);
void StringReplace(std::string& str, const std::string& from, const std::string& to);
std::string IntToStr(const int num);
