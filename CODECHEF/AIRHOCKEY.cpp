#include <iostream>
using namespace std;

int main()
{
    int testcase, a, b;
    cin >> testcase;
    while (testcase--)
    {
        cin >> a >> b;
        int ans = max(a, b);
        cout << 7 - ans << endl;
    }
    return 0;
}
