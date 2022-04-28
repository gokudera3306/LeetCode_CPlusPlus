#include "Q206_ReverseLinkedList.h"

ListNode* Q206_ReverseLinkedList::reverseList(ListNode* head)
{
    if (!head) return nullptr;

    ListNode* result = head;
    head = head->next;
    result->next = nullptr;

    while (head)
    {
	    const auto temp = head;
        head = head->next;

        temp->next = result;
        result = temp;
    }

    return result;
}
