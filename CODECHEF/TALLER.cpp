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
        if (a > b)
        {
            cout << "A" << endl;
        }
        else
        {
            cout << "B" << endl;
        }
    }
    return 0;
}