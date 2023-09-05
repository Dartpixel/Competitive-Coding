//********************* Creator- itwasme *******************//
//******************* Created on- 10/03/23 ******************//

/*
Suppose, we assume

'0' = x
So like '5' = x+5
and x+5-x = '5
Therefore, 'a' + 2 = 'c'

*/

class Solution
{
public:
    string replaceDigits(string s)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if ((s[i] >= 48) && (s[i] <= 57))
            {
                s[i] = s[i - 1] + (s[i] - '0');
            }
        }
        return s;
    }
};
