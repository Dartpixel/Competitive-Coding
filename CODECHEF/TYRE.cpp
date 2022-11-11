#include <iostream>
using namespace std;

int main()
{
    int testcase, a, b;
    cin >> testcase;
    while (testcase--)
    {
        cin >> a >> b;
        cout << a * 2 + b * 4 << endl;
    }
    return 0;
}
