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
        if (x > 65)
        {
            cout << "Overload" << endl;
        }
        if (x <= 65 && x >= 35)
        {
            cout << "Normal" << endl;
        }
        if (x < 35)
        {
            cout << "Underload" << endl;
        }
    }
    return 0;
}