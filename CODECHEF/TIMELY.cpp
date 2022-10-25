#include <iostream>
using namespace std;

int main()
{
    int testcase, n;
    cin >> testcase;
    while (testcase--)
    {
        cin >> n;
        if (n >= 30)
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
