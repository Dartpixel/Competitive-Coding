class Solution
{
public:
    bool detectCapitalUse(string word)
    {
        int l = word.length();
        int c = 0;
        for (int i = 0; i < l; i++)
        {
            if (isupper(word[i]))
            {
                c++;
            }
        }
        if (c == l)
        {
            return true;
        }
        if (c == 1 && isupper(word[0]))
        {
            return true;
        }
        if (c == 0)
        {
            return true;
        }
        return false;
    }
};