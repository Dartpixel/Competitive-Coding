class Solution
{
public:
    int countSeniors(vector<string> &details)
    {
        int x = 0;
        for (auto &i : details)
        {
            if (i[11] > '6')
            {
                x++;
            }
            else if (i[11] == '6' && i[12] > '0')
            {
                x++;
            }
        }
        return x;
    }
};