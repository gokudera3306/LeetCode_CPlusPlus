#include "Q66_PlusOne.h"

vector<int> Q66_PlusOne::plusOne(vector<int>& digits)
{
	vector<int> result;
	int index = digits.size() - 1;

	auto carry = 0;

	while (index >= 0)
	{
		auto sum = digits[index] + carry;

		if (index == digits.size() - 1)
			sum += 1;

		carry = sum / 10;
		result.insert(result.begin(), sum % 10);

		index--;
	}

	if (carry > 0)
		result.insert(result.begin(), carry);

	return result;
}
