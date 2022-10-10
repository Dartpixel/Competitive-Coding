#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcase, n, x, k;
    cin >> testcase;
    while (testcase--)
    {
        cin >> n >> x >> k;
        int sol = k / x;
        if (sol >= n)
        {
            cout << n << endl;
        }
        else
        {
            cout << sol << endl;
        }
    }
    return 0;
}