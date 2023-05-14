#include <iostream>
using namespace std;

int main()
{
    int testcase, k, pos;
    cin >> testcase;
    while (testcase--)
    {
        cin >> k;
        if (k % 2 == 0)
        {
            pos = k;
        }
        else
        {
            pos = (3 * ((k / 2) + 1)) - (k / 2);
        }
        cout << pos << endl;
    }
    return 0;
}