#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n;
        cin >> n;
        int p = n / 100;
        int a = n % 100;

        if (a + p <= 10)
            cout << a + p << endl;

        else
            cout << -1 << endl;
    }
    return 0;
}