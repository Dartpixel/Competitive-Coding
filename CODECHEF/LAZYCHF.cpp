#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int x, m, d;
        cin >> x >> m >> d;
        int ans = x + d;
        if (x * m <= ans)
        {
            cout << x * m << endl;
        }
        else
        {
            cout << min(x * m, ans) << endl;
        }
    }
    return 0;
}