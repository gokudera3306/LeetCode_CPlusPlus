#include "Q3_LongestSubstringWithoutRepeatingCharacters.h"

#include <map>

int Q3_LongestSubstringWithoutRepeatingCharacters::lengthOfLongestSubstring(std::string s)
{
    if (s.length() == 0) return 0;

    std::map<char, int> charMap;
    auto longestLength = 0;
    auto currentLength = 0;
    auto startIndex = 0;

    for (auto strIndex = 0; strIndex < s.length(); strIndex++)
    {
        if (charMap.count(s[strIndex]) == 1 && charMap[s[strIndex]] >= startIndex)
        {
            longestLength = std::max(currentLength, longestLength);

            startIndex = charMap[s[strIndex]] + 1;
            currentLength = strIndex - startIndex;
        }

        charMap[s[strIndex]] = strIndex;
        currentLength++;
    }

    longestLength = std::max(currentLength, longestLength);

    return longestLength;
}
