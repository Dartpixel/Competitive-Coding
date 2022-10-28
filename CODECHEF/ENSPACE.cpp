#include <iostream>
using namespace std;

int main()
{
    int testcase, n, x, y;
    cin >> testcase;
    while (testcase--)
    {
        cin >> n >> x >> y;
        int sol = (x * 1) + (y * 2);
        if (sol <= n)
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