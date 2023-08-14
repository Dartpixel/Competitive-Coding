class Solution
{
public:
    int sumBase(int n, int k)
    {
        int ans = 0;
        while (n >= 1)
        {
            int temp = n % k;
            ans += temp;
            n /= k;
        }
        return ans;
    }
};