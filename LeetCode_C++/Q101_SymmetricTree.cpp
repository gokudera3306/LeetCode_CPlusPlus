#include "Q101_SymmetricTree.h"

bool Q101_SymmetricTree::isSymmetric(TreeNode* root)
{
    if (!root) return false;

    return isSymmetric(root->left, root->right);
}

bool Q101_SymmetricTree::isSymmetric(TreeNode* treeOne, TreeNode* treeTwo)
{
    if (!treeOne && !treeTwo) return true;
    if (!treeOne || !treeTwo) return false;

    if (treeOne->val != treeTwo->val) return false;

    return isSymmetric(treeOne->right, treeTwo->left) && isSymmetric(treeOne->left, treeTwo->right);
}
