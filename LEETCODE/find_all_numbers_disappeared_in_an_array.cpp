class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<int> result;
        for (int i = 1; i <= n; i++)
        {
            if (!binary_search(nums.begin(), nums.end(), i))
            {
                result.push_back(i);
            }
        }
        return result;
    }
};