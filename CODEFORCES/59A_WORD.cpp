#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int c = 0, d = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            c++;
        }
        if (str[i] >= 65 && str[i] <= 90)
        {
            d++;
        }
    }

    // transform used to convert string in upper or lower case using stl

    if (d > c)
    {
        transform(str.begin(), str.end(), str.begin(), ::toupper);
        cout << str << endl;
    }
    else
    {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        cout << str << endl;
    }
    return 0;  
}
