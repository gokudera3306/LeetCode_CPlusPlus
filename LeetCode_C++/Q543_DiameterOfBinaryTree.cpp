#include "Q543_DiameterOfBinaryTree.h"

#include <algorithm>

int Q543_DiameterOfBinaryTree::getMaxLength(TreeNode* node, int* max_length)
{
	if (!node) return 0;

	const auto leftMax = getMaxLength(node->left, max_length);
	const auto rightMax = getMaxLength(node->right, max_length);

	*max_length = max(leftMax + rightMax, *max_length);

	return max(leftMax, rightMax) + 1;
}

int Q543_DiameterOfBinaryTree::diameterOfBinaryTree(TreeNode* root)
{
	auto maxLength = 0;

	getMaxLength(root, &maxLength);

	return maxLength;
}
