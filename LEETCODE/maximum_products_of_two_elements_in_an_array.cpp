/*
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int temp=INT_MIN;
        for (int i=0; i<nums.size()-1; i++)
        {
            for (int j=i+1; j<nums.size(); j++)
            {
                temp= max(temp, ((nums[i] - 1) * (nums[j] - 1)));
            }
        }
        return temp;
    }
};

*/
class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        vector<int> ans;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                ans.push_back((nums[i] - 1) * (nums[j] - 1));
            }
        }
        int mx = *max_element(ans.begin(), ans.end());
        return mx;
    }
};
