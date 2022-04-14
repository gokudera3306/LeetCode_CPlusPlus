#include "Q1_TwoSum.h"

#include <unordered_map>

std::vector<int> Q1_TwoSum::twoSum(std::vector<int>& nums, int target)
{
	std::unordered_map<int, int> hash;
    std::vector<int> result;

    for (auto index = 0; index < nums.size(); index++)
    {
        auto currentNumber = nums[index];
        auto targetNumber = target - currentNumber;

        auto findResult = hash.find(targetNumber);

        if (findResult == hash.end())
            hash[currentNumber] = index;
        else
        {
            result.push_back(findResult->second);
            result.push_back(index);
            return result;
        }
    }

    return result;
}
