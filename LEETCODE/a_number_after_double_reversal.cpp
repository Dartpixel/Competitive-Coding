class Solution
{
public:
    bool isSameAfterReversals(int num)
    {
        int var1 = num;
        int rev = 0;
        while (num != 0)
        {
            int temp = num % 10;

            rev = (rev * 10) + temp;
            num /= 10;
        }
        int sum = 0;
        while (rev != 0)
        {
            int flag = rev % 10;
            sum = (sum * 10) + flag;
            rev /= 10;
        }
        if (sum != var1)
        {
            return false;
        }
        return true;
    }
};