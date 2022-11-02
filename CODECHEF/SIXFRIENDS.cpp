#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int x, y;
        cin >> x >> y;
        int sol = x * 3;
        int ans = y * 2;
        if (sol <= ans)
        {
            cout << sol << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
    return 0;
}
