class Solution
{
public:
    int countWords(vector<string> &words1, vector<string> &words2)
    {
        unordered_map<string, int> m1;
        unordered_map<string, int> m2;
        for (auto it : words1)
        {
            m1[it]++;
        }
        for (auto it : words2)
        {
            m2[it]++;
        }
        int count = 0;
        for (auto it : words1)
        {
            if (m1[it] == 1 && m2[it] == 1)
            {
                count++;
            }
        }
        return count;
    }
};