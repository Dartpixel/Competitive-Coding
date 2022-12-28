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
        else if (n % 5 == 0)
        {
            cout << (n / 10) + 1 << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}
