class Solution
{
public:
    int alternateDigitSum(int n)
    {
        int sum1 = 0;
        int x = n;
        vector<int> ans;
        while (x > 0)
        {
            int flag = x % 10;
            ans.push_back(flag);
            x /= 10;
        }
        reverse(ans.begin(), ans.end());
        for (int i = 0; i < ans.size(); i++)
        {
            if (i % 2 == 0)
            {
                sum1 += ans[i];
            }
            else
            {
                sum1 -= ans[i];
            }
        }
        return sum1;
    }
};