#include "Q11_ContainerWithMostWater.h"

int Q11_ContainerWithMostWater::maxArea(std::vector<int>& height)
{
	if (height.size() <= 1) return 0;

	auto frontIndex = 0;
	auto backIndex = height.size() - 1;

	auto currentMaxWater = 0;

	while (backIndex > frontIndex)
	{
		int currentWater = (backIndex - frontIndex) * std::min(height[frontIndex], height[backIndex]);
		currentMaxWater = std::max(currentMaxWater, currentWater);
		
		if (height[frontIndex] >= height[backIndex])
			backIndex--;
		else
			frontIndex++;
	}

	return currentMaxWater;
}
