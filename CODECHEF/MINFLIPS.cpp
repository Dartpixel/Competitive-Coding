#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n, c = 0, d = 0;
        cin >> n;
        int arr[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum = sum + arr[i];
        }
        if (n % 2 == 0)
        {
            cout << abs(sum / 2) << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}