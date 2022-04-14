#include "Q45_JumpGameTwo.h"

int Q45_JumpGameTwo::jump(std::vector<int>& nums)
{
    auto jumps = 0;
    auto currentJumpIndex = 0;
    auto currentFurthestIndex = 0;

    for (auto index = 0; index < nums.size() - 1; index++)
    {
        if (index + nums[index] > currentFurthestIndex)
            currentFurthestIndex = index + nums[index];

        if (index == currentJumpIndex)
        {
            jumps++;
            currentJumpIndex = currentFurthestIndex;
        }

        if (currentFurthestIndex >= nums.size() - 1)
        {
            if (currentJumpIndex < nums.size() - 1)
                jumps++;

            break;
        }
    }

    return jumps;
}
