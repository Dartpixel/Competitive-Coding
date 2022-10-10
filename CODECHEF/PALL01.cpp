#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        string str;
        cin >> str;
        int len = str.length();
        int c = 0;
        for (int i = 0; i < len; i++)
        {
            if (str[i] != str[len - i - 1])
            {
                c++;
            }
        }
        if (c == 0)
        {
            cout << "wins" << endl;
        }
        else
        {
            cout << "loses" << endl;
        }
    }

    return 0;
}