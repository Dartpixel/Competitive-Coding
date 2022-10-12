#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, x;
    cin >> a >> b >> c >> x;
    if ((x == a) || (x == b) || (x == c))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}