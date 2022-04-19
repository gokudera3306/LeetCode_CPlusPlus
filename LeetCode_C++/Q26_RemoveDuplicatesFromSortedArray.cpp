#include "Q26_RemoveDuplicatesFromSortedArray.h"

int Q26_RemoveDuplicatesFromSortedArray::removeDuplicates(vector<int>& nums)
{
	auto currentNumber = INT_MIN;
	auto duplicateCount = 0;

	for (auto num : nums)
	{
		if (currentNumber != num)
		{
			currentNumber = num;
			duplicateCount++;

			nums[duplicateCount - 1] = currentNumber;
		}
	}

	return duplicateCount;
}
