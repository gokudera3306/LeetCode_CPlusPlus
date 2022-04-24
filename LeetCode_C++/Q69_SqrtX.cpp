#include "Q69_SqrtX.h"

#include <climits>

int Q69_SqrtX::mySqrt(int x)
{
	auto upperBound = x;
	auto lowerBound = 1;

	if (upperBound == INT_MAX)
		upperBound--;

	while (lowerBound != upperBound - 1)
	{
		const auto currentNum = (lowerBound + upperBound) / 2;
		const unsigned long long product = static_cast<unsigned long long>(currentNum) * currentNum;

		if (product > x)
			upperBound = currentNum;
		else if (product < x)
			lowerBound = currentNum;
		else
		{
			lowerBound = currentNum;
			break;
		}
	}

	return lowerBound;
}
