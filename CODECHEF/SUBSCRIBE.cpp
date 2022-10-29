#include <iostream>
using namespace std;

int main()
{
    int testcase, n;
    cin >> testcase;
    while (testcase--)

    {
        cin >> n;
        if (n <= 30)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
