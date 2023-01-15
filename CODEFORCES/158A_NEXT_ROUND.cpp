#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, arr[50], c = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= arr[k - 1] && arr[i] > 0)
        {
            c++;
        }
    }
    cout << c << endl;
    return 0;
}