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
        if (x == 0 || x % 3 == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            int sol = (x / 3) + 1;
            int ans = sol * 3;
            int temp = ans - x;
            cout << temp << endl;
        }
    }
    return 0;
}