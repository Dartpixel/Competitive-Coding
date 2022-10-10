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
        if (b > a)
        {
            cout << a << endl;
        }
        else
        {
            cout << (2 * a) - b << endl;
        }
    }

    return 0;
}