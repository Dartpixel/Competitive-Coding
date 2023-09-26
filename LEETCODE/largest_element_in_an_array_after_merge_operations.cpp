class Solution
{
public:
    long long maxArrayValue(vector<int> &nums)
    {
        stack<long long int> st;
        int temp, ans;
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            if (st.empty() || nums[i] > st.top())
            {
                st.push(nums[i]);
            }
            else
            {
                long long int tot = nums[i];
                while (!st.empty() && tot <= st.top())
                {
                    tot += st.top();
                    st.pop();
                }
                st.push(tot);
            }
        }
        long long int mx = INT_MIN;
        while (!st.empty())
        {
            long long int x = st.top();
            // cout<<x<<endl;
            mx = max(mx, x);

            st.pop();
        }
        return mx;
    }
};