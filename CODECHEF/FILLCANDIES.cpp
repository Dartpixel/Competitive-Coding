#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n, k, m;
        cin >> n >> k >> m;
        if (n % (k * m) == 0)
        {
            cout << n / (k * m) << endl;
        }
        else
        {
            cout << (n / (k * m)) + 1 << endl;
        }
    }
    return 0;
}
