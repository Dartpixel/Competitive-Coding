class Solution
{
public:
    vector<string> sortPeople(vector<string> &names, vector<int> &heights)
    {
        vector<pair<int, string>> ans;
        int n = names.size();
        for (int i = 0; i < n; i++)
        {
            ans.push_back({heights[i], names[i]});
        }
        sort(ans.rbegin(), ans.rend());
        for (int i = 0; i < n; i++)
        {
            names[i] = ans[i].second;
        }
        return names;
    }
};
