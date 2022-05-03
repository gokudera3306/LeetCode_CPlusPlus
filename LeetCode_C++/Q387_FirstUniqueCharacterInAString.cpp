#include "Q387_FirstUniqueCharacterInAString.h"

#include <map>

int Q387_FirstUniqueCharacterInAString::firstUniqChar(string s)
{
	map<char, int> charMap;

	for (auto charIndex = 0; charIndex < s.length(); charIndex++)
	{
		if (charMap.count(s[charIndex]) == 0)
			charMap[s[charIndex]] = charIndex;
		else
			charMap[s[charIndex]] = -1;
	}

	auto firstIndex = INT_MAX;

	for (auto m : charMap)
		if (m.second != -1)
			firstIndex = min(firstIndex, m.second);

	return (firstIndex == INT_MAX)? -1 : firstIndex;
}
