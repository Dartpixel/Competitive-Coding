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
            cout << x - y << endl;
        }
    }
    return 0;
}