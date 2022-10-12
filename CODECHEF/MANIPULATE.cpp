#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcase, a, b;
    cin >> testcase;
    while (testcase--)
    {
        cin >> a >> b;
        if (a < b)
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