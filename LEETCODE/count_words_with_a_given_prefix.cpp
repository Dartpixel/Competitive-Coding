class Solution
{
public:
    int prefixCount(vector<string> &words, string pref)
    {
        int ans = 0;
        for (int i = 0; i < words.size(); i++)
        {
            int c = 0;
            for (int j = 0; j < pref.size(); j++)
            {
                if (words[i][j] != pref[j])
                {
                    break;
                }
                else
                {
                    c++;
                }
            }

            if (c == pref.size())
            {
                ans++;
            }
        }
        return ans;
    }
};