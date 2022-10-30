#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        cout << x * y * z << endl;
    }
    return 0;
}
