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
        long long int ans = 0;
        int i = 0;
        while (i <= n)
        {
            ans += i;
            i += 10;
        }
        cout << ans << endl;
    }
    return 0;
}
