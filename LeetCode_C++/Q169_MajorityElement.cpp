#include "Q169_MajorityElement.h"

int Q169_MajorityElement::majorityElement(vector<int>& nums)
{
    auto majorityNum = nums[0];
    auto votes = 0;

    for (const auto num : nums)
    {
        if (votes == 0)
        {
            majorityNum = num;
            votes = 0;
        }

        if (majorityNum == num)
            votes++;
        else
            votes--;
    }

    return majorityNum;
}
