#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n, k, x, y;
        cin >> n >> k >> x >> y;
        int min = k * x;
        int rem1 = (n - k) * x;
        int rem2 = (n - k) * y;
        if (rem1 <= rem2)
        {
            cout << rem1 + min << endl;
        }
        else
        {
            cout << rem2 + min << endl;
        }
    }
    return 0;
}