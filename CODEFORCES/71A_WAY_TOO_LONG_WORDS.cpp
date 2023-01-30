#include <iostream>
#include <string>

using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int c = 0;
        string str;
        cin >> str;
        int l = str.length();
        for (int i = 1; i < l - 1; i++)
        {
            c++;
        }
        if (l > 10)
        {
            cout << str[0] << c << str[l - 1] << endl;
        }
        else
        {
            cout << str << endl;
        }
    }
    return 0;
}