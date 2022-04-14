#include "Q116_PopulatingNextRightPointersInEachNode.h"

#include <cstddef>
#include <queue>

Node* Q116_PopulatingNextRightPointersInEachNode::connect(Node* root)
{
    if (!root) return root;

    std::queue<Node*> nodeQueue;
    nodeQueue.push(root);

    while (!nodeQueue.empty())
    {
        auto levelNodeCount = nodeQueue.size();

        Node* indexNode = nullptr;

        while (levelNodeCount--)
        {
	        const auto currentNode = nodeQueue.front();
            nodeQueue.pop();

            if (!indexNode)
                indexNode = currentNode;
            else
            {
                indexNode->next = currentNode;
                indexNode = currentNode;
            }

            if (currentNode->left)
                nodeQueue.push(currentNode->left);

            if (currentNode->right)
                nodeQueue.push(currentNode->right);
        }
    }

    return root;
}
