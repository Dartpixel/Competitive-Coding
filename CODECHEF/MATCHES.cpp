#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcase, c[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    long a, b;
    cin >> testcase;
    while (testcase--)
    {
        cin >> a >> b;
        int sol = a + b;
        int count = 0;
        while (sol > 0)
        {
            count += c[sol % 10];
            sol = sol / 10;
        }
        cout << count << endl;
    }

    return 0;
}
