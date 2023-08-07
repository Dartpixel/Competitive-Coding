class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> bracket;
        for (int i = 0; i < s.length(); i++)
        {
            char ch = s[i];
            if (ch == '{' || ch == '(' || ch == '[')
            {
                bracket.push(ch);
            }
            else
            {
                if (bracket.empty() == true)
                {
                    return false;
                }
                char top = bracket.top();
                if ((top == '{' && ch == '}') || (top == '(' && ch == ')') || (top == '[' && ch == ']'))
                {
                    bracket.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        if (bracket.empty() == true)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};