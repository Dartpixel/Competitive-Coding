#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcase, a, b, x, y;
    cin >> testcase;
    while (testcase--)
    {
        cin >> a >> b >> x >> y;
        float ans = (float)a / x;
        float sol = (float)b / y;
        if (ans == sol)
        {
            cout << "Both" << endl;
        }
        else if (ans < sol)
        {
            cout << "Chef" << endl;
        }
        else
        {
            cout << "Chefina" << endl;
        }
    }

    return 0;
}