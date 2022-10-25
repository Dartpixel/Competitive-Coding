#include <iostream>
using namespace std;

int main()
{
    int testcase, a, b, c;
    cin >> testcase;
    while (testcase--)
    {
        cin >> a >> b >> c;
        if (((a + b) % 2 != 0) || ((b + c) % 2 != 0) || ((a + c) % 2 != 0))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
