class Solution
{
public:
    int addDigits(int num)
    {
        int temp = 0;
        while (1)
        {
            if (num <= 9)
                break;
            int res = 0;
            while (num > 0)
            {
                int temp = num % 10;
                res = res + temp;
                num = num / 10;
            }
            num = res;
        }
        return num;
    }
};