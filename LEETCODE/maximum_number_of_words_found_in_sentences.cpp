class Solution
{
public:
    int mostWordsFound(vector<string> &sentences)
    {
        int temp = INT_MIN;
        for (int i = 0; i < sentences.size(); i++)
        {
            int c = 0;
            for (int j = 0; j < sentences[i].size(); j++)
            {
                if (sentences[i][j] == ' ')
                {
                    c++;
                }
            }
            if (temp < c)
            {
                temp = c;
            }
        }
        return temp + 1;
    }
};