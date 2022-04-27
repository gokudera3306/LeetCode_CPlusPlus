#include "Q151_MinStack.h"

void Q151_MinStack::push(int val)
{
	stack.push_back(val);
}

void Q151_MinStack::pop()
{
	stack.pop_back();
}

int Q151_MinStack::top()
{
	return stack[stack.size() - 1];
}

int Q151_MinStack::getMin()
{
    auto minNum = stack[0];

    for (auto num : stack)
        minNum = min(minNum, num);

    return minNum;
}
