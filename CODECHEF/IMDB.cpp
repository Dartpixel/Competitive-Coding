#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n, x, s, r, y = 0;
        cin >> n >> x;
        for (int i = 0; i < n; i++)
        {
            cin >> s >> r;
            if (s <= x)
            {
                if (y < r)
                {
                    y = r;
                }
            }
        }
        cout << y << endl;
    }
    return 0;
}