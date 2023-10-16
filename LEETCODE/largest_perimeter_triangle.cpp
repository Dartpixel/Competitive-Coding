//********************* Creator- itwasme *******************//
//******************** Created on- 30/1/23 *******************//

// Approach 1 (Brute Force)
// Since the problem is mainly based on one conditon that the sum of first two sides
// should be greater than the third one and then returning the maximum perimeter from the
// sides with a non-zero area, we will check the condition and update the sum with maximum
// perimeter at last returning it.
/*
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        // sort the vector
        sort(nums.begin(), nums.end());

        //finding the maximum perimeter
        int sum=0;
        for(int i=0; i<=nums.size()-3;i++)
        {
            if(nums[i]+nums[i+1]>nums[i+2])
            {
                sum=max(sum,nums[i]+nums[i+1]+nums[i+2]); // maximum perimeter
            }
        }
        return sum;
    }
};
*/
// Approach 2 (Greedy Approach)
// We came to know from the problem statement that the maximum value will return the maximum
// perimeter. So will be go for maximum value. Sort the vecor and if the last element is    /// less than the sum of second last and third last element, this mean that the condition
// is verified and the triangle is also valid.

class Solution
{
public:
    int largestPerimeter(vector<int> &nums)
    {
        // sort the vector
        sort(nums.begin(), nums.end());

        // finding the maximum perimeter
        int sum = 0;
        for (int i = nums.size() - 1; i >= 2; i--) // from last element iterating till third last
        {
            if (nums[i - 1] + nums[i - 2] > nums[i])
            {
                sum = max(sum, nums[i - 1] + nums[i - 2] + nums[i]); // maximum perimeter
            }
        }
        return sum;
    }
};