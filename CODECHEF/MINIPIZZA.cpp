#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcase, n, x;
    cin >> testcase;
    while (testcase--)
    {
        cin >> n >> x;
        int sol = n * x;
        if (sol % 4 == 0)
        {
            cout << sol / 4 << endl;
        }
        else
        {
            cout << (sol / 4) + 1 << endl;
        }
    }
    return 0;
}