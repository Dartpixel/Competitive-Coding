#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int x, y;
        cin >> x >> y;
        cout << (15 * x >= 2 * y ? "YES" : "NO") << endl;
    }
    return 0;
}