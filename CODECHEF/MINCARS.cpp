#include <iostream>
using namespace std;

int main()
{
    int testcase;
    int n;
    cin >> testcase;
    while (testcase--)
    {
        cin >> n;
        if (n % 4 == 0)
        {
            cout << n / 4 << endl;
        }
        else
        {
            cout << (n / 4) + 1 << endl;
        }
    }
    return 0;
}

