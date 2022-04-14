#include "Q103_BinaryTreeZigzagLevelOrderTraversal.h"

vector<std::vector<int>> Q103_BinaryTreeZigzagLevelOrderTraversal::zigzagLevelOrder(TreeNode* root)
{
    vector<vector<int>> result;

    TransformTreeToVector(root, result, 0);

    return result;
}

void Q103_BinaryTreeZigzagLevelOrderTraversal::TransformTreeToVector(TreeNode* root, vector<vector<int>>& result, int level)
{
    if (!root) return;

    if (result.size() < level + 1)
    {
	    const vector<int> newVector;
        result.push_back(newVector);
    }

    if (level % 2 == 0)
        result[level].push_back(root->val);
    else
        result[level].insert(result[level].begin(), root->val);

    level++;

    TransformTreeToVector(root->left, result, level);
    TransformTreeToVector(root->right, result, level);
}
