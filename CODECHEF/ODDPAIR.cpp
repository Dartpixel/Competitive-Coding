#include <iostream>
using namespace std;

int main()
{
    int testcase;
    long long n;
    cin >> testcase;
    while (testcase--)
    {
        cin >> n;
        if (n % 2 == 0)
        {
            cout << (n * n) / 2 << endl;
        }
        else
        {
            cout << (n * n - 1) / 2 << endl;
        }
    }
    return 0;
}
