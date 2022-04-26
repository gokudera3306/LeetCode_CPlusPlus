#pragma once
#include <vector>
#include "TreeNode.h"

using namespace std;

class Q108_ConvertSortedArrayToBinarySearchTree
{
private:
    TreeNode* BinarySearch(vector<int>& nums, int frontIndex, int backIndex);
public:
    TreeNode* sortedArrayToBST(vector<int>& nums);
};

