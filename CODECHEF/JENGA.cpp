#include <iostream>
using namespace std;

int main()
{
    int testcase, n, x;
    cin >> testcase;
    while (testcase--)
    {
        cin >> n >> x;
        if (x % n == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
