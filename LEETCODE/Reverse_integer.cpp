class Solution
{
public:
    int reverse(int x)
    {
        int temp = 0;
        while (x != 0)
        {
            int num = x % 10;
            if ((temp > INT_MAX / 10) || (temp < INT_MIN / 10))
            {
                return 0;
            }
            temp = (temp * 10) + (num);
            x = x / 10;
        }
        return temp;
    }
};