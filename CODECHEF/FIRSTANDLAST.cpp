#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int temp = arr[0] + arr[n - 1];
        for (int i = 0; i < n - 1; i++)
        {
            int ans = arr[i] + arr[i + 1];
            temp = max(temp, ans);
        }
        cout << temp << endl;
    }
    return 0;
}
