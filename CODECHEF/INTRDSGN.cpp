#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int sol = x1 + y1;
        int ans = x2 + y2;
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