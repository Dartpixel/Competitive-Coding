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
        if (x <= 70)
        {
            cout << "0" << endl;
        }
        else if (x > 70 && x <= 100)
        {
            cout << "500" << endl;
        }
        else
        {
            cout << "2000" << endl;
        }
    }
    return 0;
}