#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n, i, temp;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int c = 0;
        for (i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                continue;
            }
            else
            {
                temp = i;
            }
        }
        cout << temp << endl;
    }
    return 0;
}
