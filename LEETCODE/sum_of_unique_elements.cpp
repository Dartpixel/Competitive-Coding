class Solution
{
public:
    int sumOfUnique(vector<int> &nums)
    {
        unordered_map<int, int> ans;
        int sum = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            ans[nums[i]]++;
        }
        for (auto i : ans)
        {
            if (i.second == 1)
            {
                sum += i.first;
            }
        }
        return sum;
    }
};
