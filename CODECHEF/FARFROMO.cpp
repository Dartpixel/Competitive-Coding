#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int dis1 = (x1 * x1) + (y1 * y1);
        int dis2 = (x2 * x2) + (y2 * y2);

        if (dis1 > dis2)
        {
            cout << "ALEX" << endl;
        }
        else if (dis2 > dis1)
        {
            cout << "BOB" << endl;
        }
        else
        {
            cout << "EQUAL" << endl;
        }
    }
    return 0;
}