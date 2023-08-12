class Solution
{
public:
    int balancedStringSplit(string s)
    {
        int r = 0;
        int p = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'R')
            {
                p++;
            }
            else
            {
                p--;
            }
            if (p == 0)
            {
                r++;
            }
        }
        return r;
    }
};