class Solution
{
public:
    int countNegatives(vector<vector<int>> &grid)
    {
        int c = 0;
        int m = grid.size();
        int n = grid[0].size();
        int left = 0;
        int right = n - 1;
        for (int i = 0; i < m; i++)
        {
            left = 0;
            right = n - 1;
            while (left <= right)
            {
                int mid = (left + right) / 2;
                if (grid[i][mid] < 0)
                {
                    right = mid - 1;
                }
                else
                {
                    left = mid + 1;
                }
            }
            c = c + (n - left);
        }
        return c;
    }
};