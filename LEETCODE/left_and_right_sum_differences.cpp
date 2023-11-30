class Solution
{
public:
    vector<int> leftRigthDifference(vector<int> &nums)
    {
        vector<int> ans;
        int a = 0, b = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            b += nums[i];
        }

        for (int i = 0; i < nums.size(); i++)
        {
            b -= nums[i];
            ans.push_back(abs(a - b));
            a += nums[i];
        }
        return ans;
    }
};
