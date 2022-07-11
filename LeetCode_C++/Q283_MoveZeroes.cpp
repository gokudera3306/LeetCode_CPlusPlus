#include "Q283_MoveZeroes.h"

void Q283_MoveZeroes::moveZeroes(vector<int>& nums)
{
    auto zeroIndex = 0;
    auto currentIndex = 0;

    while (currentIndex < nums.size())
    {
        if (nums[currentIndex] == 0 || currentIndex < zeroIndex)
            currentIndex++;
        else if (nums[zeroIndex] != 0)
            zeroIndex++;
        else
            swap(nums[currentIndex], nums[zeroIndex]);
    }
}
