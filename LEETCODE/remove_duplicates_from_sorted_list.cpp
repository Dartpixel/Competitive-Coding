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
    ListNode *deleteDuplicates(ListNode *headNode)
    {
        ListNode *startNode = headNode;
        while (startNode != NULL && startNode->next != NULL)
        {
            if (startNode->val == startNode->next->val)
            {
                ListNode *duplicateNode = startNode->next;
                startNode->next = startNode->next->next;
                delete (duplicateNode);
            }
            else
            {
                startNode = startNode->next;
            }
        }
        return headNode;
    }
};