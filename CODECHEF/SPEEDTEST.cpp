#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int a, x, b, y;
        cin >> a >> x >> b >> y;
        if (a * y > b * x)
        {
            cout << "Alice" << endl;
        }
        else if (b * x > a * y)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Equal" << endl;
        }
    }
    return 0;
}
