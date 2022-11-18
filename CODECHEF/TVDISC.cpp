#include <iostream>
using namespace std;

int main()
{
    int testcase, a, b, c, d;
    cin >> testcase;
    while (testcase--)
    {
        cin >> a >> b >> c >> d;
        if (a - c < b - d)
        {
            cout << "First" << endl;
        }
        else if (b - d < a - c)
        {
            cout << "Second" << endl;
        }
        else
        {
            cout << "Any" << endl;
        }
    }
    return 0;
}
