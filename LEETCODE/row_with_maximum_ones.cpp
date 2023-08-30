class Solution
{
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>> &mat)
    {
        int temp = INT_MIN, r = 0;
        for (int i = 0; i < mat.size(); i++)
        {
            int c = 0;
            for (int j = 0; j < mat[0].size(); j++)
            {
                if (mat[i][j] == 1)
                {
                    c++;
                }
            }
            if (c > temp)
            {
                temp = c;
                r = i;
            }
        }
        return {r, temp};
    }
};