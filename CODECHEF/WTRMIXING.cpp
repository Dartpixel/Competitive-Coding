#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        if (a == b)
        {
            cout << "YES" << endl;
        }
        else if (a < b)
        {
            int ans = b - a;
            if (ans <= x)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else if (a > b)
        {
            int sol = a - b;
            if (sol <= y)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}