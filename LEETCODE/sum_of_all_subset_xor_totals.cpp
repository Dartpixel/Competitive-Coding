class Solution
{
public:
    int subsetXORSum(vector<int> &nums)
    {
        int ans = 0;
        if (nums.size() == 0)
        {
            return 0;
        }

        for (int i = 0; i < (1 << nums.size()); i++)
        {
            int temp = 0;
            for (int j = 0; j < nums.size(); j++)
            {
                if ((i & (1 << j)) != 0)
                {
                    temp = temp ^ nums[j];
                }
            }
            ans = ans + temp;
        }
        return ans;
    }
};