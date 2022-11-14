#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n;
        cin >> n;
        int ans = n * 50;
        int a = 2 * (n * 10);
        int b = n * 15;
        cout << ans - (a + b) << endl;
    }
    return 0;
}