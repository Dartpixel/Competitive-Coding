#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    int count = 0;
    while (testcase--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a + b == 2) || (b + c == 2) || (a + c == 2))
        {
            count += 1;
        }
    }
    cout << count << endl;
    return 0;
}