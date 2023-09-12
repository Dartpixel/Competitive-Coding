class Solution
{
public:
    int countGoodRectangles(vector<vector<int>> &rectangles)
    {
        int c = 0;
        int mn = INT_MIN;
        for (vector<int> rectangle : rectangles)
        {
            int ans = min(rectangle[0], rectangle[1]);
            if (ans > mn)
            {
                mn = ans;
                c = 0;
            }
            if (ans == mn)
            {
                c++;
            }
        }
        return c;
    }
};