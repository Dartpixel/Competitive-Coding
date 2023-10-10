class Solution
{
public:
    int repeatedNTimes(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        int ans;
        int mx = 0;
        for (auto it : mp)
        {
            if (mx < it.second)
            {
                mx = it.second;
                ans = it.first;
            }
        }
        return ans;
    }
};