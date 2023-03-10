#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int a, b;
        cin >> a >> b;
        int sol = a * 1;
        int ans = b * 2;
        if (a >= b)
        {
            cout << b << endl;
        }
        else
        {
            cout << a + (b - a) * 2 << endl;
        }
    }
    return 0;
}
