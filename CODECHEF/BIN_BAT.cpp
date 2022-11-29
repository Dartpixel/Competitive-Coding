#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int c = 0;
        while (n > 0)
        {
            n = n / 2;
            c++;
        }
        int sol = c - 1;
        cout << (a * sol) + (b * (sol - 1)) << endl;
    }
    return 0;
}
