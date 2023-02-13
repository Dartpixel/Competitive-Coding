#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int index;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int max1 = INT_MIN;
        int max2 = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (max1 < a[i])
            {
                max1 = max(max1, a[i]);
                max2 = b[i];
                index = i;
            }
            if (max1 == a[i])
            {
                if (b[i] > max2)
                {
                    max1 = max(max1, a[i]);
                    max2 = b[i];
                    index = i;
                }
            }
        }
        cout << index + 1 << endl;
    }
    return 0;
}