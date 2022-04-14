#include "Q107_BinaryTreeLevelOrderTraversalTwo.h"

#include <queue>

std::vector<std::vector<int>> Q107_BinaryTreeLevelOrderTraversalTwo::levelOrderBottom(TreeNode* root)
{
	std::vector<std::vector<int>> result;

    if (!root) return result;

    std::queue<TreeNode*> q;
    auto level = 0;

    q.push(root);

    while (!q.empty())
    {
        level++;

        auto size = q.size();

        while (size--)
        {
	        const auto currentNode = q.front();
            q.pop();

            if (result.size() < level)
            {
	            std::vector<int> newVector;
                result.insert(result.begin(), newVector);
            }

            result[result.size() - level].push_back(currentNode->val);

            if (currentNode->left)
                q.push(currentNode->left);

            if (currentNode->right)
                q.push(currentNode->right);
        }
    }

    return result;
}
