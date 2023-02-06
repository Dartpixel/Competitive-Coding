//********************* Creator- itwasme *******************//
//******************** Created on- 03/02/23 *******************//

// Approach
// sort both the string s and t, if the size of s is not equal to
// size of t, return false. If the element at s[i] is not equal to
// s[i], return false, else return true.

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        bool flag = true;
        if (s.size() != t.size())
            return false;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != t[i])
                return false;
        }
        return true;
    }
};