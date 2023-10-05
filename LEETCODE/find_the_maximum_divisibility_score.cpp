class Solution
{
public:
    int maxDivScore(vector<int> &nums, vector<int> &div)
    {
        int c = 0, d = 0;
        for (int i = 0; i < div.size(); i++)
        {
            int div_count = 0;
            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[j] % div[i] == 0)
                    div_count++;
            }
            if (c == div_count)
            {
                d = d == 0 ? div[i] : min(d, div[i]);
            }
            else if (div_count > c)
            {
                c = div_count;
                d = div[i];
            }
        }
        return d;
    }
};