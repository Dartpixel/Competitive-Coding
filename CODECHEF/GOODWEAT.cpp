#include <iostream>

using namespace std;

int main()
{
    // your code goes here
    int testcase;
    cin >> testcase;
    while (testcase--)
    {

        int a[7];
        int s = 0;
        int r = 0;
        for (int i = 0; i < 7; i++)
        {
            cin >> a[i];

            if (a[i] == 1)
            {
                s++;
            }
            else if (a[i] == 0)
            {
                r++;
            }
        }
        if (s > r)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}