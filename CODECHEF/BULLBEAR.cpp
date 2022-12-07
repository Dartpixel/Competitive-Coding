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
        if (x > y)
        {
            cout << "LOSS" << endl;
        }
        else if (y > x)
        {
            cout << "PROFIT" << endl;
        }
        else
        {
            cout << "NEUTRAL" << endl;
        }
    }
    return 0;
}
