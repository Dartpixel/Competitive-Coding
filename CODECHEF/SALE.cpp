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
        int x = min(a, b);
        int y = min(x, c);
        cout << (a + b + c) - y << endl;
    }
    return 0;
}