#include <iostream>
using namespace std;

int main()
{
    int testcase, x, y, z;
    cin >> testcase;
    while (testcase--)
    {
        cin >> x >> y >> z;
        cout << (x * 4) + (y * 2) + (z * 0) << endl;
    }
    return 0;
}
