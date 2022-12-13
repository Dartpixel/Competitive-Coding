#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int a, b, c, d, e, f, p, q;
        cin >> p >> q >> a >> b >> c >> d >> e >> f;
        int m = a + b + c, n = d + e + f;
        if (m >= 150 && n >= 150)
        {
            if (2 * p > q)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else if ((m >= 150 && n < 150) || (m < 150 && n >= 150))
        {
            if (q < p)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
