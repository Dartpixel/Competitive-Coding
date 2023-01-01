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
        if (x < y * 2)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << x / (y * 2) << endl;
        }
    }
    return 0;
}
