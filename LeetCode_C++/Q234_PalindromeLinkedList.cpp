
#include "Q234_PalindromeLinkedList.h"

bool Q234_PalindromeLinkedList::isPalindrome(ListNode* head)
{
    auto reverseHead = head;
    auto slow = head;
    auto fast = head;

    auto isFirst = true;

    while (fast && fast->next)
    {
	    const auto temp = slow;
        slow = slow->next;
        fast = fast->next->next;

        if (isFirst && reverseHead == head)
        {
            reverseHead->next = nullptr;
            isFirst = false;
        }
        else
        {
            temp->next = reverseHead;
            reverseHead = temp;
        }
    }

    slow = fast ? slow->next : slow;

    while (reverseHead && slow)
    {
        if (reverseHead->val != slow->val) return false;
        reverseHead = reverseHead->next;
        slow = slow->next;
    }

    return true;
}
