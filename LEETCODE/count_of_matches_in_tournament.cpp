class Solution
{
public:
    int numberOfMatches(int n)
    {
        int sum = 0, temp;
        while (n > 1)
        {
            if (n % 2 != 0)
            {
                temp = (n - 1) / 2;
            }
            else
            {
                temp = n / 2;
            }
            sum += temp;
            n = (n - 1) / 2 + 1;
        }
        return sum;
    }
};