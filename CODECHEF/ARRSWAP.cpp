#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    int x;
    while (testcase--)
    {
        int n;
        cin >> n;
        std::vector<long long int> arr;
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> x;
            arr.push_back(x);
        }
        sort(arr.begin(), arr.end());
        long long int ans = 1e9;
        for (int i = 0; i <= n; i++)
        {
            ans = min(ans, arr[n + i - 1] - arr[i]);
        }
        cout << ans << endl;
    }
    return 0;
}