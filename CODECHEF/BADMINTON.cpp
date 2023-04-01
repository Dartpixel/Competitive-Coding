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
        cout << (n / 2) + 1 << endl;
    }
    return 0;
}