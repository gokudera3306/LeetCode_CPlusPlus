#pragma once
#include <map>

class Q70_ClimbingStairs
{
private:
	std::map<int, int> wayMap;
	int findWaysToClimb(int stairs);
public:
	int climbStairs(int n);
};

