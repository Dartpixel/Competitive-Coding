#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int x, y, k;
        cin >> x >> y >> k;
        int sol = abs(x - y);
        if (sol % k != 0)
        {
            cout << (sol / k) + 1 << endl;
        }
        else
        {
            cout << sol / k << endl;
        }
    }
    return 0;
}
