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

        cout << (n / 7) + (n % 7 == 6 ? 1 : 0) << endl;
    }
    return 0;
}