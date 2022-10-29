#include <iostream>
using namespace std;

int main()
{
    int testcase, x, y, z;
    cin >> testcase;
    while (testcase--)
    {
        cin >> x >> y >> z;
        cout << (x + z) - y << endl;
    }
    return 0;
}
