#include "Q100_SameTree.h"

bool Q100_SameTree::isSameTree(TreeNode* p, TreeNode* q)
{
    if (p == nullptr && q == nullptr)
        return true;
    else if (p == nullptr && q != nullptr || q == nullptr && p != nullptr)
        return false;

    if (p->val != q->val) return false;

    if (isSameTree(p->left, q->left) == false) return false;
    if (isSameTree(p->right, q->right) == false) return false;

    return true;
}
