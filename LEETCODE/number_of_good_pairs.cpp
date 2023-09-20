//********************* Creator- itwasme *******************//
//******************* Created on- 16/02/23 *******************//

class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        int c = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 1; j < nums.size(); j++)
            {
                if (nums[i] == nums[j] && i < j)
                {
                    c++;
                }
            }
        }
        return c;
    }
};