class Solution
{
public:
    int vowelStrings(vector<string> &words, int left, int right)
    {

        int c = 0;
        unordered_set<char> ans({'a', 'e', 'i', 'o', 'u'});

        for (int i = left; i < words.size() && i <= right; i++)
        {
            int n = words[i].size();
            if (ans.find(words[i][0]) != ans.end() && ans.find(words[i][n - 1]) != ans.end())
                c++;
        }

        return c;
    }
};
