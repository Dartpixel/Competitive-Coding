#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 0;
        int c = 0;
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            int id;
            cin >> id;
            m[id]++;
            if (m[id] & 1)
            {
                c++;
            }
            else
            {
                c--;
            }
            ans = max(c, ans);
        }
        cout << ans << endl;
    }
    return 0;
}