class Solution
{
public:
    int maximizeSum(vector<int> &nums, int k)
    {
        int temp = 0;
        for (auto it : nums)
        {
            temp = max(temp, it);
        }
        int ans = 0;
        while (k--)
        {
            ans += temp;
            temp++;
        }
        return ans;
    }
};