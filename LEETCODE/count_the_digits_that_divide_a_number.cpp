//********************* Creator- itwasme *******************//
//******************* Created on- 01/02/23 ******************//

// Similar Problem: 728 Self Diving Numbers

class Solution
{
public:
    int countDigits(int num)
    {
        int c = 0;
        int flag = num;
        while (num > 0)
        {
            int temp = num % 10;
            if (flag % temp == 0)
            {
                c++;
            }
            num = num / 10;
        }
        return c;
    }
};
