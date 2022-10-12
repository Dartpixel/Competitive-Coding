#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcase, x, y;
    cin >> testcase;
    while (testcase--)
    {
        cin >> x >> y;
        int sol = y * 100;
        if ((sol / x) >= 50)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}