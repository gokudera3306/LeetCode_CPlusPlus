#include "Q70_ClimbingStairs.h"

int Q70_ClimbingStairs::findWaysToClimb(int stairs)
{
    if (stairs == 1) return 1;
    if (stairs == 2) return 2;

    const auto waysWhenLastStepIsOne = (wayMap.count(stairs - 1) == 0) ? findWaysToClimb(stairs - 1) : wayMap[stairs - 1];
    const auto waysWhenLastStepIsTwo = (wayMap.count(stairs - 2) == 0) ? findWaysToClimb(stairs - 2) : wayMap[stairs - 2];

    wayMap[stairs - 1] = waysWhenLastStepIsOne;
    wayMap[stairs - 2] = waysWhenLastStepIsTwo;

    return waysWhenLastStepIsOne + waysWhenLastStepIsTwo;
}

int Q70_ClimbingStairs::climbStairs(int n)
{
    return findWaysToClimb(n);
}
