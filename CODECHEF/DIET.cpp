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
        int temp = 0;
        bool protein;
        for (int i = 0; i < n; i++)
        {
            if ((arr[i] + temp) >= k)
            {
                temp = (arr[i] + temp) - k;
                protein = true;
            }
            else
            {
                protein = false;
                temp = i + 1;
                break;
            }
        }
        if (protein)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO"
                 << " " << temp << endl;
        }
    }
    return 0;
}
