class Solution
{
public:
    int largestAltitude(vector<int> &gain)
    {
        gain.insert(gain.begin(), 0);
        vector<int>::iterator it;
        int n = gain.size();
        for (int i = 1; i < n; i++)
        {
            gain[i] = gain[i] + gain[i - 1];
        }
        int max = *max_element(gain.begin(), gain.end());
        return max;
    }
};