#include <iostream>
using namespace std;

int main()
{
    int testcase, n, k;
    cin >> testcase;
    while (testcase--)
    {
        cin >> n >> k;
        cout << (n / k) * (n / k) << endl;
    }
    return 0;
}
