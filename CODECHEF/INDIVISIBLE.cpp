#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        for (int i = 2; i < 100; i++)
        {
            if ((a % i != 0) && (b % i != 0) && (c % i != 0))
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}
