class Solution
{
public:
    vector<int> distinctDifferenceArray(vector<int> &nums)
    {
        unordered_set<int> s1;
        int n = nums.size();
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            s1.insert(nums[i]);
            unordered_set<int> s2;
            for (int j = i + 1; j < n; j++)
            {
                s2.insert(nums[j]);
            }

            int res = s1.size() - s2.size();
            ans.push_back(res);
        }
        return ans;
    }
};