#include <iostream>
using namespace std;

int main()
{

    int testcase, a, b;
    cin >> testcase;
    while (testcase--)
    {
        cin >> a >> b;
        int c = (a + b);
        if (c > 60)
            cout << 4 << endl;
        if ((c >= 3) && (c <= 10))
            cout << 2 << endl;
        if ((c >= 11) && (c <= 60))
            cout << 3 << endl;
        if (c < 3)
            cout << 1 << endl;
    }
    return 0;
}