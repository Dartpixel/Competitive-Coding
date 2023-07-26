#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> ans;
        for (int i = 0; i < 3; i++)
        {
            int n;
            cin >> n;
            ans.push_back(n);
        }
        sort(ans.rbegin(), ans.rend());
        cout << ans[0] + ans[1] << endl;
    }
    return 0;
}
