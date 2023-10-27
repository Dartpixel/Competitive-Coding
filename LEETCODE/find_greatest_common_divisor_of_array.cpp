class Solution
{
public:
    int findGCD(vector<int> &nums)
    {
        int mn, mx;
        for (int i = 0; i < nums.size(); i++)
        {
            mn = *min_element(nums.begin(), nums.end());
            mx = *max_element(nums.begin(), nums.end());
        }
        return __gcd(mn, mx);
    }
};