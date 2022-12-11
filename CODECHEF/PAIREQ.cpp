#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n, x = 0;
        cin >> n;
        int arr[n];
        int c;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            c = 0;
            for (int j = 0; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    c++;
                }
                if (c > x)
                {
                    x = c;
                }
            }
        }
        cout << n - x << endl;
    }
    return 0;
}
