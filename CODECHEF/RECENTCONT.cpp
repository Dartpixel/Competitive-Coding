#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int testcase, n;
    cin >> testcase;
    while (testcase--)
    {
        int c = 0, count = 0;
        cin >> n;
        string str;
        for (int i = 0; i < n; i++)
        {
            cin >> str;
            if (str == "START38")
            {
                c++;
            }
            else
            {
                count++;
            }
        }
        cout << c << " " << count << endl;
    }
    return 0;
}
