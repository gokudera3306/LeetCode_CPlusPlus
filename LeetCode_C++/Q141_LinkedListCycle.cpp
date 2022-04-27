#include "Q141_LinkedListCycle.h"

bool Q141_LinkedListCycle::hasCycle(ListNode* head)
{
    if (!head) return false;

    ListNode* slowPointer = head;
    ListNode* fastPointer = head->next;

    if (!fastPointer) return false;

    while (slowPointer != nullptr && fastPointer != nullptr && fastPointer->next != nullptr)
    {
        if (slowPointer == fastPointer)
            return true;

        slowPointer = slowPointer->next;
        fastPointer = fastPointer->next->next;
    }

    return false;
}
