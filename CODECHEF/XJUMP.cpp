#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int x, y;
        cin >> x >> y;
        int sol = x / y;
        int ans = x % y;
        int p = sol + ans;
        cout << p << endl;
    }
    return 0;
}
