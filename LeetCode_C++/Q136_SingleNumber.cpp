#include "Q136_SingleNumber.h"

int Q136_SingleNumber::singleNumber(vector<int>& nums)
{
    int result = 0;

    for (const auto num : nums)
        result ^= num;

    return result;
}
