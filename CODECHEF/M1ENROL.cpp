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
        if (x <= y)
        {
            cout << x - y << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
    return 0;
}
