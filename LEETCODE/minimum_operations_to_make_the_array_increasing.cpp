class Solution
{
public:
    int minOperations(vector<int> &nums)
    {
        if (nums.size() == 1)
        {
            return 0;
        }
        int c = 0;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] < nums[i + 1])
            {
                continue;
            }
            else
            {
                c = c + (nums[i] + 1 - nums[i + 1]);
                nums[i + 1] = nums[i] + 1;
            }
        }
        return c;
    }
};