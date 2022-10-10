#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {

        int a, b, c;
        cin >> a >> b >> c;

        int m = max(a, b);
        int n = max(m, c);

        cout << n << endl;
    }

    return 0;
}