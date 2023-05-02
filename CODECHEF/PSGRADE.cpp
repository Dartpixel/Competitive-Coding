#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int am, bm, cm, t, a, b, c;
        cin >> am >> bm >> cm >> t >> a >> b >> c;
        if (a >= am && b >= bm && c >= cm)
        {
            if (a + b + c >= t)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}