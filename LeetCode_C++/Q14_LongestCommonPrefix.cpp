#include "Q14_LongestCommonPrefix.h"

string Q14_LongestCommonPrefix::longestCommonPrefix(vector<string>& strs)
{
	if (strs.empty()) return "";
	
	string result;

	for (auto charIndex = 0; charIndex < strs[0].length(); charIndex++)
	{
		const auto currentChar = strs[0][charIndex];

		for (auto strIndex = 1; strIndex < strs.size(); strIndex++)
		{
			if (charIndex >= strs[strIndex].length() || currentChar != strs[strIndex][charIndex])
				return result;
		}

		result += currentChar;
	}

	return result;
}
