// time complexity - nlogn
// n for looping each character of string s and log n for
// both for searching using find() and insert()

class Solution
{
public:
    int partitionString(string s)
    {
        int c = 1; // if no partition occurs we still have our main string as a substring
        set<char> ans;
        for (auto i : s)
        {
            if (ans.find(i) != ans.end())
            {
                ans.clear();
                c++;
            }
            ans.insert(i); // for every iteration, insertion is used
        }
        return c;
    }
};