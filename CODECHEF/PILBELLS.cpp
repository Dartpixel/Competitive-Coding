#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, k, p;
        cin >> n >> x >> k >> p;
        if (k <= x)
            cout << p + (10 * k) << endl;
        else if (k > x && k < n)
            cout << p + (10 * x) + (5 * (k - x)) << endl;
        else if (k == n)
            cout << p + (10 * x) + (5 * (n - x)) + 20 << endl;
    }
    return 0;
}