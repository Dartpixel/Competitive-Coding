#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n, x;
        cin >> n >> x;
        int c = n - x;
        int d = min(x, c);
        cout << d << endl;
    }

    return 0;
}
