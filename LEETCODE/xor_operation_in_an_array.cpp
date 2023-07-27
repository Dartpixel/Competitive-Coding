class Solution
{
public:
    int xorOperation(int n, int start)
    {
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            int temp = start + (2 * i);
            ans.push_back(temp);
        }
        int x = ans[0];
        for (int i = 0; i < n - 1; i++)
        {
            x ^= ans[i + 1];
        }
        return x;
    }
};