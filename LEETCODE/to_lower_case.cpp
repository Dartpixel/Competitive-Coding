//********************* Creator- itwasme *******************//
//******************** Created on- 31/1/23 *******************//

// Approach
// If the ascii value of character in a string is between 65 and 90,
// it mean the character is in upper case. Add 32 to convert the charcater
// form upper case to lower case. Return string s.

class Solution
{
public:
    string toLowerCase(string s)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if ((int)s[i] >= 65 && (int)s[i] <= 90)
            {
                s[i] += 32; // upper case to lower case
            }
        }
        return s;
    }
};