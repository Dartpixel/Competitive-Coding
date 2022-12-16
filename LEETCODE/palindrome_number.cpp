class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;

        int num = x;
        long long a = 0;
        while (x)
        {
            a = a * 10 + x % 10;
            x = x / 10;
        }
        if (a == num)
            return true;
        else
            return false;
    }
};