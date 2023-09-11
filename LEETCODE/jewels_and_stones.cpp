class Solution
{
public:
    int numJewelsInStones(string jewels, string stones)
    {
        unordered_set<char> jewelSet;
        int c = 0;
        for (char &jewel : jewels)
        {
            jewelSet.insert(jewel);
        }
        for (char &stone : stones)
        {
            if (jewelSet.count(stone) > 0)
            {
                c++;
            }
        }
        return c;
    }
};