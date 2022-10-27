#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int sol = max(a, b);
        int p = max(sol, c);
        int ans = min(a, b);
        int q = min(ans, c);
        cout << p - q << endl;
    }
    return 0;
}
