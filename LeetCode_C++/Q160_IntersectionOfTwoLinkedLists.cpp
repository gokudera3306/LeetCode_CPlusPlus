#include "Q160_IntersectionOfTwoLinkedLists.h"

ListNode* Q160_IntersectionOfTwoLinkedLists::getIntersectionNode(ListNode* headA, ListNode* headB)
{
    ListNode* listOne = headA;
    ListNode* listTwo = headB;

    while (true)
    {
        if (listOne == listTwo) return listOne;

        listOne = listOne->next;
        listTwo = listTwo->next;

        if (listOne == nullptr && listTwo == nullptr) break;
        if (listOne == nullptr) listOne = headB;
        if (listTwo == nullptr) listTwo = headA;
    }

    return nullptr;
}
