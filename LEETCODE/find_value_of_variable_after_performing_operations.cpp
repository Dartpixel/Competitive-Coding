//********************* Creator- itwasme *******************//
//******************* Created on- 13/02/23 *******************//

class Solution
{
public:
    int finalValueAfterOperations(vector<string> &operations)
    {
        int sum = 0;
        for (int i = 0; i < operations.size(); i++)
        {
            if ((operations[i] == "++X") || (operations[i] == "X++"))
            {
                sum += 1;
            }
            if ((operations[i] == "--X") || (operations[i] == "X--"))
            {
                sum -= 1;
            }
        }
        return sum;
    }
};