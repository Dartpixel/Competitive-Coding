class Solution
{
public:
    bool areOccurrencesEqual(string s)
    {
        map<char, int> m;
        for (auto i : s)
        {
            m[i]++; // counting the frequencies
        }
        auto temp = m.at(s[0]); // comparing the frequency
        for (auto it : m)
        {
            if (temp != it.second)
            {
                return false; // condition for false return
            }
        }
        return true;
    }
};