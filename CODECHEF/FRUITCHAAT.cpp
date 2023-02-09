#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int x, y;
        cin >> x >> y;
        if (x <= y)
        {
            cout << x / 2 << endl;
        }
        else
        {
            if (x / 2 < y)
            {
                cout << x / 2 << endl;
            }
            else
            {
                cout << y << endl;
            }
        }
    }
    return 0;
}