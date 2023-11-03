//********************* Creator- itwasme *******************//
//******************** Created on- 03/02/23 *******************//

// use (int) or stoi to converts a string to an integer value.
// substr is used to extraxt a part of a string.

class Solution
{
public:
    string freqAlphabets(string s)
    {
        int len = s.size();
        string ans = "";
        for (int i = 0; i < len; i++)
        {
            if (i < len - 1)
            {
                if (s[i] == 49 && s[i + 2] == '#')
                {
                    ans += char(96 + stoi(s.substr(i, 2)));
                    i = i + 2;
                    continue;
                }
                else if (s[i] == 50 && s[i + 2] == '#')
                {
                    ans += char(96 + stoi(s.substr(i, 2)));
                    i = i + 2;
                    continue;
                }
            }
            ans += char(int(s[i]) - 48 + 96);
        }
        return ans;
    }
};