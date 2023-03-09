#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i, testcase, a, b, j;
    cin >> testcase;
    for (i = 1; i <= testcase; i++)
    {
        cin >> a >> b;
        if (a == b)
            cout << "yes" << endl;
        else if (a < b)
        {
            for (j = 1;; j++)
            {
                a = a * 2;
                if (a == b)
                {
                    cout << "yes" << endl;
                    break;
                }
                else if (a > b)
                {
                    cout << "no" << endl;
                    break;
                }
            }
        }
        else
        {
            for (j = 1;; j++)
            {
                b = b * 2;
                if (a == b)
                {
                    cout << "yes" << endl;
                    break;
                }
                else if (b > a)
                {
                    cout << "no" << endl;
                    break;
                }
            }
        }
    }
    return 0;
}