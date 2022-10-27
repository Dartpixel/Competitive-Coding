#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        if (y % x == 0)
        {
            if (n >= y / x)
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
