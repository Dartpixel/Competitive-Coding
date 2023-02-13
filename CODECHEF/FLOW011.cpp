#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        float salary;
        cin >> salary;

        float hra;
        float da;
        if (salary >= 1500)
        {
            hra = 500;
            da = 0.98 * salary;
        }
        else
        {
            hra = salary * 0.1;
            da = salary * 0.9;
        }
        cout << fixed << setprecision(2) << salary + da + hra << endl;
    }
    return 0;
}