#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcase, x1, x2, y1, y2;
    cin >> testcase;
    while (testcase--)
    {
        cin >> x1 >> x2 >> y1 >> y2;
        int a = max(x1, y1) - min(x1, y1);
        int b = max(x2, y2) - min(x2, y2);
        int sol = max(a, b);
        cout << sol << endl;
    }
    return 0;
}