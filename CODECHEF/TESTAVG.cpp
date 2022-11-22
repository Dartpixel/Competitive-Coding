#include <iostream>
using namespace std;

int main()
{
    int testcase;
    float a, b, c;
    cin >> testcase;
    while (testcase--)
    {
        cin >> a >> b >> c;
        if (((a + b) / 2 < 35) || ((b + c) / 2 < 35) || ((c + a) / 2 < 35))
        {
            cout << "Fail" << endl;
        }
        else
        {
            cout << "Pass" << endl;
        }
    }
    return 0;
}
