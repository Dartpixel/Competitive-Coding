class Solution
{
public:
    int heightChecker(vector<int> &heights)
    {
        int c = 0;
        vector<int> temp = heights;
        sort(temp.begin(), temp.end());
        for (int i = 0; i < heights.size(); ++i)
        {
            if (heights[i] != temp[i])
            {
                c = c + 1;
            }
        }
        return c;
    }
};
