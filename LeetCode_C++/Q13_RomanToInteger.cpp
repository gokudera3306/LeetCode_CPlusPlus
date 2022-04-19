#include "Q13_RomanToInteger.h"

#include <map>

int Q13_RomanToInteger::romanToInt(string s)
{
	map<char, int> romanMap = {
		{'I', 1},
		{'V', 5},
		{'X', 10},
		{'L', 50},
		{'C', 100},
		{'D', 500},
		{'M', 1000}
	};

	auto result = 0;

	for (unsigned long long index = 0; index < s.length(); index++)
	{
		auto currentChar = s[index];
		const auto hasNextChar = index + 1 < s.length();

		if (hasNextChar)
		{
			auto nextChar = s[index + 1];

			if ((currentChar == 'I' && (nextChar == 'V' || nextChar == 'X')) ||
				(currentChar == 'X' && (nextChar == 'L' || nextChar == 'C')) ||
				(currentChar == 'C' && (nextChar == 'D' || nextChar == 'M')))
			{
				result += romanMap[nextChar] - romanMap[currentChar];
				index++;
				continue;
			}
		}

		result += romanMap[currentChar];
	}

	return result;
}
