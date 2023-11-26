//********************* Creator- itwasme *******************//
//******************** Created on- 03/02/23 *******************//

class Solution
{
public:
    int diagonalSum(vector<vector<int>> &mat)
    {
        int sum = 0;
        int sum1 = 0;
        for (int i = 0; i < mat.size(); i++)
            for (int j = 0; j < mat[0].size(); j++)
                if (i == j)
                    sum += mat[i][j];
                else if (i + j == (mat.size()) - 1)
                    sum1 += mat[i][j];
        return sum + sum1;
    }
};
