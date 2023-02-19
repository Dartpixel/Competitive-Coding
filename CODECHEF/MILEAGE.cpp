#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        float n, x, y, a, b, d, p;
        cin >> n >> x >> y >> a >> b;
        p = (n / a) * x;
        d = (n / b) * y;
        if (p < d)
        {
            cout << "PETROL" << endl;
        }
        if (d < p)
        {
            cout << "DIESEL" << endl;
        }
        if (p == d)
        {
            cout << "ANY" << endl;
        }
    }
    return 0;
}s