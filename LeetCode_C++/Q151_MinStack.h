#pragma once
#include <vector>

using namespace std;

class Q151_MinStack
{
private:
	vector<int> stack;
public:
    void push(int val);
    void pop();
    int top();
    int getMin();
};

