class Solution
{
public:
    string checkPalindrome(vector<string> &words)
    {
        int i;
        for (i = 0; i < (int)words.size(); i++)
        {
            string word = words[i];
            reverse(word.begin(), word.end());
            if (word == words[i])
            {
                return words[i];
            }
        }
        return "";
    }

    string firstPalindrome(vector<string> &words)
    {
        string ans = checkPalindrome(words);
        return ans;
    }
};
