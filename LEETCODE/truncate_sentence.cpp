class Solution
{
public:
    string truncateSentence(string s, int k)
    {
        int c = 0;
        string ans = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ')
            {
                c++;
            }
            if (c < k)
            {
                ans += s[i];
            }
        }
        return ans;
    }
};