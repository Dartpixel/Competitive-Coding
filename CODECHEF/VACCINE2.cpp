#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        float d;
        cin >> n >> d;
        int a[n];
        float r = 0, nor = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > 9 && a[i] < 80)
                nor++;
            else
                r++;
        }
        cout << (ceil(nor / d)) + (ceil(r / d)) << endl;
    }
    return 0;
}