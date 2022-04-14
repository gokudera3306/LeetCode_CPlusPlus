#pragma once
#include <vector>

#include "TreeNode.h"

using namespace std;

class Q103_BinaryTreeZigzagLevelOrderTraversal
{
public:
	vector<std::vector<int>> zigzagLevelOrder(TreeNode* root);
	void TransformTreeToVector(TreeNode* root, vector<vector<int>>& result, int level);
};

