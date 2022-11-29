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
        int sol = x * 4;
        cout << sol + y << endl;
    }
    return 0;
}
