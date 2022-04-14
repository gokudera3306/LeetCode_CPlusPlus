#include "Q102_BinaryTreeLevelOrderTraversal.h"

std::vector<std::vector<int>> Q102_BinaryTreeLevelOrderTraversal::levelOrder(TreeNode* root)
{
	std::vector<std::vector<int>> result;

    TransformTreeToVector(root, result, 0);

    return result;
}

void Q102_BinaryTreeLevelOrderTraversal::TransformTreeToVector(TreeNode* root, std::vector<std::vector<int>>& result, int level)
{
    if (!root) return;

    if (result.size() < level + 1)
    {
	    const std::vector<int> newVector;
        result.push_back(newVector);
    }

    result[level].push_back(root->val);

    level++;

    TransformTreeToVector(root->left, result, level);
    TransformTreeToVector(root->right, result, level);
}
