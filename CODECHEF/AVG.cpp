#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n, k, v;
        cin >> n >> k >> v;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        int total = n + k;
        int ans = v * total;
        int sol = ans - sum;
        if (sol % k == 0 && sol > 0)
        {
            cout << sol / k << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}
