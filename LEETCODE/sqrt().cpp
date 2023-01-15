class Solution
{
public:
    int mySqrt(int x)
    {
        long long int start = 0, end = x, mid;
        while (1)
        {
            int sol = start + end;
            if (sol == 1)
            {
                return 1;
            }
            mid = sol / 2;

            if (start >= end || mid == start || mid == end)
            {
                break;
            }
            if ((mid * mid) == x)
            {
                break;
            }
            if (mid * mid > x)
            {
                end = mid;
            }
            else
            {
                start = mid;
            }
        }
        return mid;
    }
};