class Solution
{
public:
    vector<int> separateDigits(vector<int> &nums)
    {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            vector<int> sol;
            while (nums[i] > 0)
            {
                int temp = nums[i] % 10;
                sol.push_back(temp);
                nums[i] /= 10;
            }
            reverse(sol.begin(), sol.end());
            for (int j = 0; j < sol.size(); j++)
            {
                ans.push_back(sol[j]);
            }
        }
        return ans;
    }
};