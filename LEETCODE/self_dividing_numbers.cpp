class Solution
{
public:
    vector<int> selfDividingNumbers(int left, int right)
    {
        vector<int> ans;
        for (int i = left; i <= right; i++)
        {
            int flag = 0;
            int x = i;
            while (x > 0)
            {
                int temp = x % 10;
                if (temp != 0 && i % temp == 0)
                {
                    flag = 1;
                }
                else
                {
                    flag = 0;
                    break;
                }
                x /= 10;
            }
            if (flag)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
