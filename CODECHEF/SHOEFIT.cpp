#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a == 0 && b == 1) || (a == 1 && b == 0))
        {
            cout << "1" << endl;
        }
        else if ((a == 0 && c == 1) || (a == 1 && c == 0))
        {
            cout << "1" << endl;
        }
        else if ((b == 0 && c == 1) || (b == 1 && c == 0))
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
    return 0;
}