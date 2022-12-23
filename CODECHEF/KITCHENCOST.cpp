#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (x <= a[i])
            {
                c = c + b[i];
            }
        }
        cout << c << endl;
    }
    return 0;
}
