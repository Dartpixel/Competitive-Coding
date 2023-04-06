#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;

    while (t--)
    {
        int x, y, a;
        cin >> x >> y;

        a = 2 * y + (x - y);

        cout << (x == y ? a - 1 : a) << endl;
    }
    return 0;
}