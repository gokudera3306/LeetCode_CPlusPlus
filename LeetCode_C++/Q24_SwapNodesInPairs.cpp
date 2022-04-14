#include "Q24_SwapNodesInPairs.h"

ListNode* Q24_SwapNodesInPairs::swapPairs(ListNode* head)
{
    if (!head || !(head->next)) return head;

    ListNode* tempNode = head;
    ListNode* tempNode1 = head->next;

    head = head->next;

    tempNode->next = tempNode1->next;
    tempNode1->next = tempNode;

    tempNode1 = tempNode->next;

    while (tempNode1)
    {
        if (!(tempNode1->next)) break;

        tempNode->next = tempNode1->next;
        tempNode1->next = tempNode->next->next;
        tempNode->next->next = tempNode1;

        tempNode = tempNode1;
        tempNode1 = tempNode1->next;
    }

    return head;
}
