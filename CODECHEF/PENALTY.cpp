#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int sum1 = 0, sum2 = 0;
        int arr[10];
        for (int i = 0; i < 10; i++)
        {
            cin >> arr[i];
        }
        for (int i = 1; i < 10; i = i + 2)
        {
            if (arr[i] == 1)
            {
                sum2++;
            }
        }
        for (int i = 0; i < 10; i = i + 2)
        {
            if (arr[i] == 1)
            {
                sum1++;
            }
        }
        if (sum1 > sum2)
        {
            cout << "1" << endl;
        }
        else if (sum1 < sum2)
        {
            cout << "2" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
    return 0;
}
