#include "Q7_ReverseInteger.h"

#include <cstdlib>
#include <string>

int Q7_ReverseInteger::reverse(int x)
{
	const auto isNegative = x < 0;

	string resultString = "";

	const auto absNum = abs(x);
	const auto numString = to_string(absNum);

	if (numString.length() == 1) return x;

	for (auto strIndex = numString.length(); strIndex > 0; strIndex--)
		resultString += numString[strIndex - 1];

	try
	{
		return stoi(resultString) * (isNegative ? -1 : 1);
	}
	catch (exception e)
	{
		return 0;
	}
}
