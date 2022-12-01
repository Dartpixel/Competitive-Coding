#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n, m, k, x;
        cin >> n >> m >> k >> x;
        int ans = n * k;
        int sol = ans + m;
        int temp = n * (k - 1);
        if (x % sol != 0 && ((x % sol) - temp) <= 0)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
    return 0;
}
