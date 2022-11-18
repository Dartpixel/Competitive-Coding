#include <iostream>
using namespace std;

int main()
{
    int testcase, x, y, z;
    cin >> testcase;
    while (testcase--)
    {
        cin >> x >> y >> z;
        if (x + y <= z)
        {
            cout << "2" << endl;
        }
        else if (x <= z)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
    return 0;
}
