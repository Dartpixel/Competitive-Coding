class Solution
{
public:
    int commonFactors(int a, int b)
    {
        int temp = max(a, b);
        int c = 0;
        for (int i = 1; i <= temp; i++)
        {
            if (a % i == 0 && b % i == 0)
            {
                c++;
            }
        }
        return c;
    }
};