#include <iostream>
using namespace std;

int main()
{
    int testcase, sol;
    cin >> testcase;
    while (testcase--)
    {
        int n, k;
        cin >> n >> k;
        int sol = n % k;
        if (k == 0)
        {
            cout << n << endl;
        }
        else
        {
            cout << sol << endl;
        }
    }
    return 0;
}
