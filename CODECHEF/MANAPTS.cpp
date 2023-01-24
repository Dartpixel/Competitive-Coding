#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int a, b;
        cin >> a >> b;
        if (a <= b)
        {
            cout << b / a << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }

    return 0;
}