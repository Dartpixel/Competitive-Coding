#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n, x;
        cin >> n >> x;
        int sol = n - x;
        if (n > x)
        {
            if (sol % 4 == 0)
            {
                cout << sol / 4 << endl;
            }
            else
            {
                cout << (sol / 4) + 1 << endl;
            }
        }
        else
        {
            cout << "0" << endl;
        }
    }
    return 0;
}
