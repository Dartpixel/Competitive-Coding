#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        int ans = a[0] + a[1];
        if (a[0] == a[1])
        {
            for (int i = 2; i < n; i++)
            {
                if (a[i] != a[0])
                {
                    ans = a[0] + a[i];
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
