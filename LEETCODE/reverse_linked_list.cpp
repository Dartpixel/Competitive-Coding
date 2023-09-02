/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        ListNode *x = 0;
        ListNode *y = head;
        while (y != 0)
        {
            ListNode *temp = y->next;
            y->next = x;
            x = y;
            y = temp;
        }
        return x;
    }
};