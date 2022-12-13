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
        int ans = y - x;
        cout << (ans / 8) + 1 << endl;
    }
    return 0;
}
