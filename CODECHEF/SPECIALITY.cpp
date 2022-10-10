#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int testcase, a, b, c;
    cin >> testcase;
    while (testcase--)
    {
        cin >> a >> b >> c;
        if ((a > b) && (a > c))
        {
            cout << "Setter" << endl;
        }
        else if ((b > a) && (b > c))
        {
            cout << "Tester" << endl;
        }
        else if ((c > a) && (c > b))
        {
            cout << "Editorialist" << endl;
        }
    }
    return 0;
}