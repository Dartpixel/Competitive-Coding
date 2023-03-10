#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int ans = 10 * x;
        if (ans >= y)
        {
            cout << y * z << endl;
        }
        else
        {
            cout << ans * z << endl;
        }
    }
    return 0;
}
