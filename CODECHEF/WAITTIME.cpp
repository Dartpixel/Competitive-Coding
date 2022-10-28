#include <iostream>
using namespace std;

int main()
{
    int testcase, x, k;
    cin >> testcase;
    while (testcase--)
    {
        cin >> x >> k;
        cout << (x * 7) - k << endl;
    }
    return 0;
}