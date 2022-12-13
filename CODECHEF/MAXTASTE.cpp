#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int x = max(a, b);
        int y = max(c, d);
        cout << x + y << endl;
    }
    return 0;
}
