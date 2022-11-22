#include <iostream>
using namespace std;

int main()
{
    int testcase;
    int n, a, b, c;
    ;
    cin >> testcase;
    while (testcase--)
    {
        cin >> n >> a >> b >> c;
        if (b >= n && a + c >= n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
