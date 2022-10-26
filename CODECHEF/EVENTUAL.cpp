#include <iostream>
using namespace std;

int main()
{
    int testcase, w1, w2, x1, x2, m;
    cin >> testcase;
    while (testcase--)
    {
        cin >> w1 >> w2 >> x1 >> x2 >> m;
        int sol = w2 - w1;
        int p = x1 * m;
        int q = x2 * m;
        if ((sol >= p) && (sol <= q))
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
    return 0;
}
