#include "Q94_BinaryTreeInorderTraversal.h"

void Q94_BinaryTreeInorderTraversal::traverse(TreeNode* root, vector<int>& nodes)
{
	if (!root) return;

	traverse(root->left, nodes);
	nodes.push_back(root->val);
	traverse(root->right, nodes);
}

 vector<int> Q94_BinaryTreeInorderTraversal::inorderTraversal(TreeNode* root)
{
	vector<int> result;
	traverse(root, result);
	return result;
}
