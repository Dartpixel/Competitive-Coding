#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int x, y;
        cin >> x >> y;
        cout << x * 10 + y * 5 << endl;
    }
    return 0;
}
