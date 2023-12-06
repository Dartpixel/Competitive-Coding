class Solution
{
public:
    vector<vector<int>> largestLocal(vector<vector<int>> &grid)
    {
        int n = grid.size() - 2;
        vector<vector<int>> ans(n, vector<int>(n, 0));

        for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < ans.size(); j++)
            {
                int mx = INT_MIN;
                for (int k = i; k < i + 3; k++)
                {
                    for (int l = j; l < j + 3; l++)
                    {
                        mx = max(mx, grid[k][l]);
                    }
                }
                ans[i][j] = mx;
            }
        }
        return ans;
    }
};