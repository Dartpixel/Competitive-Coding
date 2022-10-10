#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcase;
    int a, b, x = 0, y = 0, diff, lead = 0, flag;
    cin >> testcase;
    while (testcase--)
    {
        cin >> a >> b;
        x += a;
        y += b;
        if (x > y)
        {
            diff = x - y;
            if (lead < diff)
            {
                lead = diff;
                flag = 1;
            }
        }
        else
        {
            diff = y - x;
            if (lead < diff)
            {
                lead = diff;
                flag = 2;
            }
        }
    }
    cout << flag << " " << lead << endl;
    return 0;
}