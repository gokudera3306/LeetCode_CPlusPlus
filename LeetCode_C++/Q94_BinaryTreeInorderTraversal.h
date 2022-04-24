#pragma once
#include <vector>
#include "TreeNode.h"

using namespace std;

class Q94_BinaryTreeInorderTraversal
{
private:
	void traverse(TreeNode* root, vector<int>& nodes);
public:
	vector<int> inorderTraversal(TreeNode* root);
};
