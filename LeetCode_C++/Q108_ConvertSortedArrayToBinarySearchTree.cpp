#include "Q108_ConvertSortedArrayToBinarySearchTree.h"

TreeNode* Q108_ConvertSortedArrayToBinarySearchTree::BinarySearch(vector<int>& nums, int frontIndex, int backIndex)
{
	if (frontIndex > backIndex) return nullptr;

	const auto mid = (backIndex + frontIndex) / 2;
	const auto tree = new TreeNode();

	tree->val = nums[mid];

	const auto leftTree = BinarySearch(nums, frontIndex, mid - 1);
	const auto rightTree = BinarySearch(nums, mid + 1, backIndex);

	tree->left = leftTree;
	tree->right = rightTree;

	return tree;
}

TreeNode* Q108_ConvertSortedArrayToBinarySearchTree::sortedArrayToBST(vector<int>& nums)
{
	return BinarySearch(nums, 0, nums.size() -1);
}
