#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int b, l;
        cin >> b >> l;
        int ans = abs(pow(b, 2) + pow(l, 2));
        int sol = abs(pow(b, 2) - pow(l, 2));
        cout << (float)sqrt(sol) << " " << (float)sqrt(ans) << endl;
    }
    return 0;
}