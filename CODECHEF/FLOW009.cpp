#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int a, b;
        cin >> a >> b;
        float ans = a * b;
        if (a > 1000)
        {
            cout << fixed << setprecision(6) << ((ans) - (ans)*0.1) << endl;
        }
        else
        {
            cout << fixed << setprecision(6) << ans << endl;
        }
    }
    return 0;
}
