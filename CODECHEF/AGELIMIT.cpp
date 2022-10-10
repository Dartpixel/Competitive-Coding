#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcase, x, y, a;
    cin >> testcase;
    while (testcase--)
    {
        cin >> x >> y >> a;
        if ((a >= x) && (a < y))
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