class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        vector<int>::iterator it = nums.begin();
        while (it != nums.end())
        {
            if (*it == val)
            {
                it = nums.erase(it);
            }
            else
            {
                it++;
            }
        }
        int len = nums.size();
        return len;
    }
};