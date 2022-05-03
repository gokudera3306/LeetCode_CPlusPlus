#include "Q217_ContainsDuplicate.h"
#include <unordered_set>

bool Q217_ContainsDuplicate::containsDuplicate(vector<int>& nums)
{
	unordered_set<int> numSet;

	for (auto num : nums)
	{
		if (numSet.count(num) == 0)
			numSet.insert(num);
		else
			return true;
	}

	return false;
}
