class Solution
{
public:
    string longestCommonPrefix(vector<string> &str, int n)
    {
        string ans = "";
        for (int i = 0; i < str[0].length(); i++)
        {
            char ch = str[0][i];
            bool match = true;

            for (int j = 0; j < n; j++)
            {
                if (str[j].size() < i || ch != str[j][i])
                {
                    match = false;
                    break;
                }
            }
            if (match == false)
                break;
            else
                ans.push_back(ch);
        }
        return ans;
    }
};