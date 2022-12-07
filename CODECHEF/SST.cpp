#include <iostream>
using namespace std;
int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        float x, y;
        cin >> x >> y;
        float ans = (x * 10);
        float sol = (y * 5);
        if (x > y)
        {
            cout << "FIRST" << endl;
        }
        else if (y > x)
        {
            cout << "SECOND" << endl;
        }
        else
        {
            cout << "ANY" << endl;
        }
    }
    return 0;
}
