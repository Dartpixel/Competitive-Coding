//********************* Creator- itwasme *******************//
//******************* Created on- 02/04/23 *****************//

class Solution
{
public:
    vector<int> successfulPairs(vector<int> &spells, vector<int> &potions, long long success)
    {

        int p = potions.size();
        sort(potions.begin(), potions.end());
        vector<int> ans;
        for (long long i : spells)
        {

            int low = 0;
            int high = p - 1;
            int count = 0;
            while (low <= high)
            {
                int mid = low + (high - low) / 2;
                if (i * potions[mid] >= success)
                {
                    count += high - mid + 1;
                    high = mid - 1;
                }
                else if (i * potions[mid] < success)
                {
                    low = mid + 1;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};