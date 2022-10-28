#include <iostream>
using namespace std;

int main()
{
    int testcase, n, a, b;
    cin >> testcase;
    while (testcase--)
    {
        cin >> n >> a >> b;
        if ((n * a) <= b)
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
