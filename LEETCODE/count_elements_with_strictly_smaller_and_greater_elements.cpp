class Solution
{
public:
    int countElements(vector<int> &nums)
    {
        int minimum = *min_element(nums.begin(), nums.end());
        int maximum = *max_element(nums.begin(), nums.end());
        int c = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > minimum && nums[i] < maximum)
            {
                c++;
            }
        }
        return c;
    }
};