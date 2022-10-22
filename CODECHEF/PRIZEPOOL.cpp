#include <iostream>
using namespace std;

int main()
{
    int testcase, x, y;
    cin >> testcase;
    while (testcase--)
    {
        cin >> x >> y;
        cout << (x * 10) + (y * 90) << endl;
    }
    return 0;
}
