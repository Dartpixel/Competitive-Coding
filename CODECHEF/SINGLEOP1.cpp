#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n, c = 0;
        cin >> n;
        char str[n];
        cin >> str;
        for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] == '1')
            {
                c++;
            }
            else
            {
                break;
            }
        }
        cout << c << endl;
    }
    return 0;
}