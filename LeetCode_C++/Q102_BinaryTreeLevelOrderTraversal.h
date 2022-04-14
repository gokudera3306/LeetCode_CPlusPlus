#pragma once
#include <vector>

#include "TreeNode.h"

class Q102_BinaryTreeLevelOrderTraversal
{
public:
	std::vector<std::vector<int>> levelOrder(TreeNode* root);
	void TransformTreeToVector(TreeNode* root, std::vector<std::vector<int>>& result, int level);
};

