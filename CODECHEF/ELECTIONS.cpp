#include <iostream>
using namespace std;

int main()
{
    int testcase, a, b, c;
    cin >> testcase;
    while (testcase--)
    {
        cin >> a >> b >> c;
        if (a > 50)
        {
            cout << "A" << endl;
        }
        else if (b > 50)
        {
            cout << "B" << endl;
        }
        else if (c > 50)
        {
            cout << "C" << endl;
        }
        else
        {
            cout << "NOTA" << endl;
        }
    }
    return 0;
}
