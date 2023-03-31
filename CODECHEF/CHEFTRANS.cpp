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
        if (x + y > z)
        {
            cout << "train" << endl;
        }
        else if (x + y < z)
        {
            cout << "planebus" << endl;
        }
        else
        {
            cout << "equal" << endl;
        }
    }
    return 0;
}