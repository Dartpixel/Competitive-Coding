#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n, i;
        cin >> n;
        int a[n], b[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int c = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            if ((a[i] && b[i]) > 0)
            {
                c++;
            }
            else
            {
                c = 0;
            }
            ans = max(ans, c);
        }
        cout << ans << endl;
    }
    return 0;
}
