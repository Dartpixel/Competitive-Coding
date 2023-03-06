#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int x = min(abs(a - b), abs(abs(a - b) - c));
        cout << x << endl;
    }
    return 0;
}
