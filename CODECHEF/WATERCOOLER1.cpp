#include <iostream>
using namespace std;

int main()
{
    int testcase, x, y, m;
    cin >> testcase;
    while (testcase--)
    {
        cin >> x >> y >> m;
        if (x * m < y)
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
