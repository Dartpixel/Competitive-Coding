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
        int temp = x - y;
        float ans = x * (0.1);
        float sol = ans + x;
        cout << sol - (float)temp << endl;
    }
    return 0;
}