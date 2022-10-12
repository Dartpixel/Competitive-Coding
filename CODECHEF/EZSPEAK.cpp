#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n;
        string str;
        cin >> n;
        cin >> str;
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                c = 0;
            }
            else
            {
                c++;
            }
            if (c == 4)
            {
                break;
            }
        }
        if (c == 4)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}