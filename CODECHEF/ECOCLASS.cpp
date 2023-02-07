#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n;
        cin >> n;
        int s[n];
        int d[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> d[i];
        }
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == d[i])
            {
                c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}