class Solution
{
public:
    int dis(vector<int> &a, vector<int> &b)
    {
        int x = abs(a[0] - b[0]);
        int y = abs(a[1] - b[1]);
        int dia = min(x, y);
        if (a[0] > b[0] && a[1] < b[1])
        {
            a[0] -= dia;
            a[1] += dia;
        }
        else if (a[0] < b[0] && a[1] > b[1])
        {
            a[0] += dia;
            a[1] -= dia;
        }
        else if (a[0] > b[0] && a[1] > b[1])
        {
            a[0] -= dia;
            a[1] -= dia;
        }
        else if (a[0] < b[0] && a[1] < b[1])
        {
            a[0] += dia;
            a[1] += dia;
        }
        int extra = abs(a[0] - b[0]) + abs(a[1] - b[1]);
        return dia + extra;
    }

    int minTimeToVisitAllPoints(vector<vector<int>> &points)
    {
        int ans = 0;
        int n = points.size();
        for (int i = 1; i < n; i++)
        {
            ans += dis(points[i - 1], points[i]);
        }
        return ans;
    }
};