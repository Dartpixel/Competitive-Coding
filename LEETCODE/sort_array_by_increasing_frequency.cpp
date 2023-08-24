class Solution
{
public:
    vector<int> frequencySort(vector<int> &nums)
    {
        unordered_map<int, int> ans;
        for (int it1 : nums)
        {
            ans[it1]++;
        }
        sort(begin(nums), end(nums), [&](int it1, int it2)
             { return ans[it1] == ans[it2] ? it1 > it2 : ans[it1] < ans[it2]; });
        return nums;
    }
};