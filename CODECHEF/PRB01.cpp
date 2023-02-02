#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int flag = 1;
        int n;
        cin >> n;
        if (n == 0 || n == 1)
        {
            flag = 0;
        }
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "no" << endl;
        }
        else
        {
            cout << "yes" << endl;
        }
    }
    return 0;
}