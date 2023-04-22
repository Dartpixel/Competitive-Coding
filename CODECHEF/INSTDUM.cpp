#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int sum = 0, c = 0;
        for (int i = 0; i < n; i++)
        {
            sum = sum + arr[i];
            if (sum == (i + 1))
            {
                c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}
