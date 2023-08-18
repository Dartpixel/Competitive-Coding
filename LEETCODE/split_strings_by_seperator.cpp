class Solution
{
public:
    vector<string> splitWordsBySeparator(vector<string> &words, char separator)
    {
        vector<string> result;
        for (const string &it : words)
        {
            istringstream temp(it);
            string s;
            while (getline(temp, s, separator))
            {
                if (!s.empty())
                {
                    result.push_back(s);
                }
            }
        }
        return result;
    }
};