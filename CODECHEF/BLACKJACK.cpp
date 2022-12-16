#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int a, b;
        cin >> a >> b;
        int sol = 21 - (a + b);
        if (sol > 10)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << sol << endl;
        }
    }
    return 0;
}
