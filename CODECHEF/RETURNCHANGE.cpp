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
        int x = n % 10;
        if (x == 0)
        {
            cout << (100 - n) << endl;
        }
        else if (n % 10 < 5)
        {
            cout << 100 - (n - x) << endl;
        }
        else
        {
            cout << 100 - (n + (10 - x)) << endl;
        }
    }
    return 0;
}
