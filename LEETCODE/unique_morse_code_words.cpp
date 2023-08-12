class Solution
{
public:
    int uniqueMorseRepresentations(vector<string> &words)
    {
        vector<string> str = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---",
                              "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-",
                              ".--", "-..-", "-.--", "--.."};

        unordered_set<string> s;
        for (string &word : words)
        {
            string ans;
            for (char ch : word)
            {
                ans += str[ch - 'a'];
            }
            s.insert(ans);
        }
        return s.size();
    }
};