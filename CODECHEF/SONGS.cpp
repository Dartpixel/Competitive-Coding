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
        if (n < x)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << n / (x * 3) << endl;
        }
    }
    return 0;
}
