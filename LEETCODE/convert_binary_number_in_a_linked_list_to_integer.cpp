
class Solution
{
public:
    int getDecimalValue(ListNode *head)
    {
        vector<int> v;
        while (head != NULL)
        {
            v.push_back(head->val);
            head = head->next;
        }
        reverse(v.begin(), v.end());

        int num = 0;
        for (int i = 0; i < v.size(); i++)
        {
            num += (v[i] * (1 << i));
        }
        return num;
    }
};