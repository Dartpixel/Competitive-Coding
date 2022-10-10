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
        int c = 0;
        cin >> a >> b;
        for (int i = a; i <= b; i++)
        {
            if ((i % 10 == 2) || (i % 10 == 3) || (i % 10 == 9))
            {
                c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}