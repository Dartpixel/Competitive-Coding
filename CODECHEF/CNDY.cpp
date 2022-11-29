#include <iostream>
#include <map>
using namespace std;

int main()
{
    int testcase, n;
    cin >> testcase;
    while (testcase--)
    {
        cin >> n;
        int arr[2 * n];
        int brr[n];
        int crr[n];
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> arr[i];
        }
        map<int, int> x;
        for (int i = 0; i < 2 * n; i++)
        {
            x[arr[i]]++;
        }
        int temp = 0;
        for (auto it : x)
        {
            if (it.second >= 3)
            {
                temp = 1;
                break;
            }
        }
        if (temp)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
    return 0;
}
