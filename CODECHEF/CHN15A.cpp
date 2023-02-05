#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            arr[i] = arr[i] + k;
            if (arr[i] % 7 == 0)
            {
                c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}