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
        int x = a + b;
        int y = b + c;
        int z = a + c;
        int ans = max(x, y);
        cout << max(ans, z) << endl;
    }
    return 0;
}
