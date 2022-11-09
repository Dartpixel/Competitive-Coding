#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int x, p, q;
        cin >> x >> p >> q;
        cout << (p - q) * x << endl;
    }
    return 0;
}
