class Solution
{
public:
    int maxProductDifference(vector<int> &nums)
    {
        int temp = 0;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        return ((nums[n - 2] * nums[n - 1]) - (nums[0] * nums[1]));
    }
};