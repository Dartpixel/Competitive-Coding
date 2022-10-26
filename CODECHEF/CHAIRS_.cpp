#include <iostream>
using namespace std;

int main()
{
    int testcase, a, b;
    cin >> testcase;
    while (testcase--)
    {
        cin >> a >> b;
        if (a > b)
        {
            cout << (a - b) << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
    return 0;
}
