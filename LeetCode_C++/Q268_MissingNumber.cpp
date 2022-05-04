#include "Q268_MissingNumber.h"

int Q268_MissingNumber::missingNumber(vector<int>& nums)
{
	int missingNumber = 0;

	for (auto index = 0; index < nums.size(); index++)
	{
		missingNumber += index;
		missingNumber -= nums[index];
	}

	missingNumber += nums.size();

	return missingNumber;
}
