class Solution
{
public:
    int findNumbers(vector<int> &nums)
    {
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int c = 0;
            while (nums[i] != 0)
            {
                int temp = nums[i] % 10;
                nums[i] /= 10;
                c += 1;
            }
            if (c % 2 == 0)
            {
                count += 1;
            }
        }
        return count;
    }
};