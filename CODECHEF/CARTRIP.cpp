#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int x;
        cin >> x;
        if (x >= 300)
        {
            cout << x * 10 << endl;
        }
        else
        {
            cout << "3000" << endl;
        }
    }
    return 0;
}
