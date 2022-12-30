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
        if (a == c || b == d)
        {
            cout << " 2" << endl;
        }
        else
        {
            cout << " 1" << endl;
        }
    }
    return 0;
}
