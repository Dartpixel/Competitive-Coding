//********************* Creator- itwasme *******************//
//******************** Created on- 03/02/23 *******************//

// Similar Problem : "Valid Anagram"

// Approach
// if strings are equal then return true.
// Now we need to check if one string is an anagram of another.
// if one string is an anagram of another, then it remains to
// check that these strings differ by only two characters.

class Solution
{
public:
    bool areAlmostEqual(string s1, string s2)
    {
        if (s1 == s2)
        {
            return true;
        }
        for (int i = 0; i < s1.size(); i++)
        {
            for (int j = 0; j < s1.size(); j++)
            {
                swap(s1[i], s1[j]);
                {
                    if (s1 == s2)
                        return true;
                    else
                        swap(s1[i], s1[j]);
                }
            }
        }
        return false;
    }
};
