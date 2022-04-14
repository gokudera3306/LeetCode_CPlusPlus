#include "Q2_AddTwoNumbers.h"

ListNode* Q2_AddTwoNumbers::addTwoNumbers(ListNode* l1, ListNode* l2)
{
    ListNode* result = nullptr;

    auto currentL1 = l1;
    auto currentL2 = l2;
    ListNode* currentResult = nullptr;

    auto carry = 0;

    while (currentL1 != nullptr || currentL2 != nullptr || carry != 0)
    {
	    const auto l1Number = (currentL1) ? currentL1->val : 0;
	    const auto l2Number = (currentL2) ? currentL2->val : 0;

	    const auto resultNumber = l1Number + l2Number + carry;

        carry = resultNumber / 10;

        if (result == nullptr)
        {
            result = new ListNode(resultNumber % 10);
            currentResult = result;
        }
        else
        {
            currentResult->next = new ListNode(resultNumber % 10);
            currentResult = currentResult->next;
        }

        currentL1 = (currentL1) ? currentL1->next : nullptr;
        currentL2 = (currentL2) ? currentL2->next : nullptr;
    }

    return result;
}
