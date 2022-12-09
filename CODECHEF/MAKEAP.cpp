#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int a, c;
        cin >> a >> c;
        int sol = (a + c);
        if (sol % 2 == 0)
        {
            cout << sol / 2 << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}
