#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcase;
    int n;
    cin >> testcase;
    while (testcase--)
    {
        cin >> n;
        if (n <= 2)
            cout << n << endl;
        else
        {
            cout << (n / 2) + 1 << endl;
        }
    }
    return 0;
}