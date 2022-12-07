#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n, x;
        cin >> n >> x;
        int sol = pow(2, x);
        for (int i = 0; i < n; i++)
        {
            sol = sol / 2;
        }
        cout << sol << endl;
    }

    return 0;
}
