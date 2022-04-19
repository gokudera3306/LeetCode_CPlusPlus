#include "Q53_MaximumSubarray.h"

int Q53_MaximumSubarray::maxSubArray(std::vector<int>& nums)
{
    auto maximum = INT_MIN, current = 0;

    for (const int num : nums)
    {
        current += num;
        maximum = std::max(maximum, current);

        if (current < 0) current = 0;
    }

    return maximum;
}
