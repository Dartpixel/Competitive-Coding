#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    int a, b, c;
    while (testcase--)
    {
        cin >> a >> b >> c;
        int x = (c - b) / a;
        if (x >= c)
        {
            cout << x - 1 << endl;
        }
        else
        {
            cout << x << endl;
        }
    }
    return 0;
}
