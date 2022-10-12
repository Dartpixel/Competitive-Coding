#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcase, n;
    cin >> testcase;
    while (testcase--)
    {
        cin >> n;
        if (n > 100)
        {
            n = n - 10;
        }
        cout << n << endl;
        ;
    }
    return 0;
}