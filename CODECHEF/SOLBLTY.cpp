#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, a, b;
        cin >> x >> a >> b;
        int d = (100 - x);
        int i = d * b;
        int s = (a + i);
        cout << (10 * s) << "\n";
    }
    return 0;
}