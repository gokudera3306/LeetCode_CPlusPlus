#include "Q171_ExcelSheetColumnNumber.h"

int Q171_ExcelSheetColumnNumber::titleToNumber(string columnTitle)
{
	auto const characterCount = 26;
	auto result = 0;

	for (int charIndex = columnTitle.length() - 1; charIndex >= 0; charIndex--)
	{
		auto base = pow(characterCount, columnTitle.length() - charIndex - 1);

		auto currentChar = columnTitle[charIndex];

		result += base * (currentChar - 64);
	}

	return result;
}
