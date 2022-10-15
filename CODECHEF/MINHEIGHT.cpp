#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcase, x, h;
    cin >> testcase;
    while (testcase--)
    {
        cin >> x >> h;
        if (x < h)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}