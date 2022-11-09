#include <iostream>
using namespace std;

int main()
{
    int testcase;
    int a, b, c;
    cin >> testcase;
    while (testcase--)
    {
        cin >> a >> b >> c;
        if (a + b + c >= 100)
        {
            if ((a >= 10) && (b >= 10) && (c >= 10))
            {
                cout << "PASS" << endl;
            }
            else
            {
                cout << "FAIL" << endl;
            }
        }
        else
        {
            cout << "FAIL" << endl;
        }
    }
    return 0;
}
