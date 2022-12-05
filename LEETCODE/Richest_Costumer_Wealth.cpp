class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {
        int wealth = -1, ans = 0;
        for (int i = 0; i < accounts.size(); ++i)
        {
            int ans = 0;
            for (int j = 0; j < accounts[0].size(); ++j)
            {
                ans = ans + accounts[i][j];
            }
            wealth = max(wealth, ans);
        }
        return wealth;
    }
};