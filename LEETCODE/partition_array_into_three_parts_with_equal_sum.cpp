class Solution
{
public:
    bool canThreePartsEqualSum(vector<int> &arr)
    {
        int sum = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            sum += arr[i];
        }
        if (sum % 3 != 0)
        {
            return false;
        }
        int a = sum / 3;
        int b = 0;
        int c = 0;
        for (int i = 0; i < arr.size() - 1; i++)
        {
            b += arr[i];
            if (b == a)
            {
                b = 0;
                c += 1;
                if (c == 2)
                {
                    return true;
                }
            }
        }
        return false;
    }
};