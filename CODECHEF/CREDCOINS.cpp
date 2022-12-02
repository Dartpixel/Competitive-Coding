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
        int sol = y * x;
        cout << sol / 100 << endl;
    }
    return 0;
}
