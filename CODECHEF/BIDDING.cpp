#include <iostream>
using namespace std;

int main()
{
    int testcase, a, b, c;
    cin >> testcase;
    while (testcase--)
    {
        cin >> a >> b >> c;
        if (a > b && a > c)
        {
            cout << "Alice" << endl;
        }
        else if (b > a && b > c)
        {
            cout << "Bob" << endl;
        }
        else if (c > a && c > a)
        {
            cout << "Charlie" << endl;
        }
    }
    return 0;
}