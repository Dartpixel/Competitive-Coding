class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        vector<bool> ans;
        int x = 0;
        for (auto &i : candies)
        {
            x = max(x, i);
        }
        for (auto &i : candies)
        {
            if (i + extraCandies >= x)
            {
                ans.push_back(true);
            }
            else
            {
                ans.push_back(false);
            }
        }
        return ans;
    }
};