//********************* Creator- itwasme *******************//
//******************** Created on- 03/02/23 *******************//

// __builtin_popcount :
// used to count the number of set bits in an unsigned integer.

class Solution
{
public:
    vector<int> sortByBits(vector<int> &arr)
    {
        sort(arr.begin(), arr.end(), [](const int &a, const int &b)
             {
                 int count1 = __builtin_popcount(a);
                 int count2 = __builtin_popcount(b);
                 return count1 == count2 ? a < b : count1 < count2; });
        return arr;
    }
};