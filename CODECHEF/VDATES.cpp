#include <iostream>
using namespace std;

int main()
{
    int testcase, d, l, r;
    cin >> testcase;
    while (testcase--)
    {
        cin >> d >> l >> r;
        if ((d >= l) && (d <= r))
        {
            cout << "Take second dose now" << endl;
        }
        else if ((d > l) && (d > r))
        {
            cout << "Too Late" << endl;
        }
        else if ((d < l) && (d < r))
        {
            cout << "Too Early" << endl;
        }
    }
    return 0;
}
