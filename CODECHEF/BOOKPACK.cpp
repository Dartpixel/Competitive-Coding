#include <iostream>

using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (c >= b)
        {
            cout << a << endl;
        }
        else
        {
            if (b % c == 0)
            {
                cout << (a * (b / c)) << endl;
            }
            else
            {
                cout << (a * (b / c + 1)) << endl;
            }
        }
    }
    return 0;
}
