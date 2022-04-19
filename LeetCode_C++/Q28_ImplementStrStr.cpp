#include "Q28_ImplementStrStr.h"

int Q28_ImplementStrStr::strStr(string haystack, string needle)
{
	if (haystack.length() < needle.length()) return -1;

	const auto firstChar = needle[0];
	
	for (auto strIndex = 0; strIndex <= haystack.length() - needle.length(); strIndex++)
	{
		if (haystack[strIndex] == firstChar)
		{
			auto isSame = true;
			auto nextSameCharIndex = -1;

			for (auto needleIndex = 1; needleIndex < needle.length(); needleIndex++)
			{
				const auto strChar = haystack[strIndex + needleIndex];

				if (nextSameCharIndex == -1 && strChar == firstChar)
					nextSameCharIndex = strIndex + needleIndex;

				if (strChar == needle[needleIndex])
					continue;

				isSame = false;
				break;
			}

			if (isSame)
				return strIndex;

			if (nextSameCharIndex != -1)
				strIndex = nextSameCharIndex - 1;
		}
	}

	return -1;
}
