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
        if (n % 10 == 0)
        {
            cout << n / 10 << endl;
        }
        else
        {
            cout << (n / 10) + 1 << endl;
        }
    }
    return 0;
}
