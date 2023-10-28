class Solution
{
public:
    int maximumNumberOfStringPairs(vector<string> &words)
    {
        int c = 0;
        for (int i = 0; i < words.size(); i++)
        {
            string temp = words[i];
            reverse(temp.begin(), temp.end());
            for (int j = i + 1; j < words.size(); j++)
            {
                if (temp == words[j])
                {
                    c++;
                    words.erase(words.begin() + j);
                    break;
                }
            }
        }
        return c;
    }
};