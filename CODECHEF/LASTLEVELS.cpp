#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcase, x, y, z;
    cin >> testcase;
    while (testcase--)
    {
        cin >> x >> y >> z;
        int sol = x * y;
        int a = ((x / 3) - 1) * z;
        int b = (x / 3) * z;
        if (x <= 3)
        {
            cout << sol << endl;
        }
        else if (x % 3 == 0)
        {
            cout << sol + a << endl;
        }
        else
        {
            cout << sol + b << endl;
        }
    }
    return 0;
}