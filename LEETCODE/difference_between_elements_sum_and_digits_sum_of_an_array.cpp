class Solution
{
public:
    int differenceOfSum(vector<int> &nums)
    {
        int sum1 = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum1 = sum1 + nums[i];
        }
        int sum2 = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            while (nums[i] != 0)
            {
                int temp = nums[i] % 10;
                sum2 = sum2 + temp;
                nums[i] = nums[i] / 10;
            }
        }
        int ans = sum1 - sum2;
        return ans;
    }
};