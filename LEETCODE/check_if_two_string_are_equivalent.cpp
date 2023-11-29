class Solution
{
public:
    bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2)
    {
        string x = "";
        for (int i = 0; i < word1.size(); i++)
        {
            x.append(word1[i]);
        }
        string y = "";
        for (int i = 0; i < word2.size(); i++)
        {
            y.append(word2[i]);
        }
        if (x == y)
        {
            return true;
        }
        return false;
    }
};