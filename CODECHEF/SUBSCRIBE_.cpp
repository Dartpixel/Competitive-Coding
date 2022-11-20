#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n, x;
        int sol = n / 6;
        if (n < 6)
        {
            cout << x << endl;
        }
        else if (n >= 6)
        {
            if (n % 6 == 0)
            {
                cout << sol * x << endl;
            }
            else
            {
                cout << (sol * x) + 1 << endl;
            }
        }
    }
    return 0;
}
