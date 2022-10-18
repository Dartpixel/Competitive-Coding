#include <iostream>
using namespace std;

int main()
{
    int testcase, n, s;
    cin >> testcase;
    while (testcase--)
    {
        cin >> n >> s;
        int sol = abs(n - s);
        int ans = abs(n - sol);
        cout << ans << endl;
    }
    return 0;
}
