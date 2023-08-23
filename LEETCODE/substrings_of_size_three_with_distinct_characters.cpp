class Solution
{
public:
    int countGoodSubstrings(string s)
    {
        int n = s.length();
        if (n < 3)
        {
            return 0;
        }

        int count = 0;
        for (int i = 0; i < n - 2; i++)
        {
            unordered_set<char> st;
            for (int j = i; j < i + 3; j++)
            {
                st.insert(s[j]);
            }
            if (st.size() == 3)
            {
                count++;
            }
        }
        return count;
    }
};