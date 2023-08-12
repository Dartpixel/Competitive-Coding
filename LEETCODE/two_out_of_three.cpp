class Solution
{
public:
    vector<int> twoOutOfThree(vector<int> &nums1, vector<int> &nums2, vector<int> &nums3)
    {
        vector<int> ans;
        for (int i = 0; i < nums1.size(); i++)
        {
            for (int j = 0; j < nums2.size(); j++)
            {
                for (int k = 0; k < nums3.size(); k++)
                {
                    if (nums1[i] == nums2[j] || nums1[i] == nums3[k])
                    {
                        ans.push_back(nums1[i]);
                    }
                    if (nums2[j] == nums3[k])
                    {
                        ans.push_back(nums2[j]);
                    }
                }
            }
        }

        set<int> sol(ans.begin(), ans.end());
        vector<int> temp(sol.begin(), sol.end());
        return temp;
    }
};