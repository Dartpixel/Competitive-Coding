#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int a, b;
        cin >> a >> b;
        int sol = (500 - a * 2) + (1000 - (a + b) * 4);
        int ans = (500 - (a + b) * 2) + (1000 - b * 4);
        if (sol > ans)
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
