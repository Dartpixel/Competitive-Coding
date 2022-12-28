class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int flag = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
            {
                flag = i;
            }
            else if (nums[i] < target)
            {
                flag = i + 1;
            }
        }
        return flag;
    }
};