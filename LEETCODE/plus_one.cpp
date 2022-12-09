class Solution
{

public:
    vector<int> plusOne(vector<int> &digits)
    {

        int s = digits.size() - 1;

        while (s >= 0)
        {

            if (digits[s] < 9)
            {

                digits[s] += 1;

                return digits;
            }

            else
            {

                digits[s] = 0;

                s--;
            }
        }

        vector<int>::iterator iter = digits.begin();

        digits.insert(iter, 1);

        return digits;
    }
};
