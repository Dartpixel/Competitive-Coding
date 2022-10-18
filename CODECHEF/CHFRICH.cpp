#include <iostream>
using namespace std;

int main()
{
    int testcase, a, b, x;
    cin >> testcase;
    while (testcase--)
    {
        cin >> a >> b >> x;
        int sol = b - a;
        int ans = sol / x;
        cout << ans << endl;
    }
    return 0;
}
