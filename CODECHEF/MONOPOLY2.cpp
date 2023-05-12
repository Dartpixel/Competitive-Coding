#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a > (b + c + d) || b > (a + c + d) || c > (a + b + d) || d > (a + b + c))
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