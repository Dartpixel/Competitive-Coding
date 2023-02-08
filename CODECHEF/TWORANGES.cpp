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
        int cnt = 0;
        int ans = max(a, c);
        int sol = min(b, d);
        if (ans > sol)
        {
            cnt = (b - a + 1) + (d - c + 1);
        }
        else
        {
            cnt = (b - a + 1) + (d - c + 1) - (sol - ans + 1);
        }
        cout << cnt << endl;
    }
    return 0;
}