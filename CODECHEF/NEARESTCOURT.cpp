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
        if (abs(x - y) % 2 == 0)
        {
            cout << abs(x - y) / 2 << endl;
        }
        else
        {
            cout << (abs(x - y) / 2) + 1 << endl;
        }
    }
    return 0;
}