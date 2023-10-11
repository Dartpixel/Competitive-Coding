class Solution
{
public:
    long long findTheArrayConcVal(vector<int> &nums)
    {
        long ans = 0;
        for (int i = 0; i < nums.size() / 2; i++)
        {
            string temp = to_string(nums[i]) + to_string(nums[nums.size() - i - 1]);
            ans += stoi(temp);
        }
        if (nums.size() % 2 != 0)
        {
            ans += nums[nums.size() / 2];
        }
        return ans;
    }
};