#include "Q237_DeleteNodeInALinkedList.h"

void Q237_DeleteNodeInALinkedList::deleteNode(ListNode* node)
{
	const auto deletedNode = node->next;

	node->val = deletedNode->val;
	node->next = deletedNode->next;

	delete deletedNode;
}
