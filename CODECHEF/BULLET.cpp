#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int ans = y / x;
        if (ans > z)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << abs(ans - z) << endl;
        }
    }
    return 0;
}
