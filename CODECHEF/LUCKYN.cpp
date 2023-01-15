#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n;
        int flag = 0;
        cin >> n;
        while (n != 0)
        {
            int temp = n % 10;
            if (temp == 7)
            {
                flag = 1;
                break;
            }
            n = n / 10;
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
