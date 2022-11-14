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
        if (a > b)
        {
            cout << b << endl;
        }
        else
        {
            cout << a << endl;
        }
    }
    return 0;
}
