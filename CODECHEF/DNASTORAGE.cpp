#include <iostream>
#include <string>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n;
        cin >> n;
        string str;
        string ans;
        ans = " ";
        cin >> str;
        for (int i = 0; i < n; i = i + 2)
        {
            if (str[i] == '0' && str[i + 1] == '0')
            {
                ans += 'A';
            }
            if (str[i] == '0' && str[i + 1] == '1')
            {
                ans += 'T';
            }
            if (str[i] == '1' && str[i + 1] == '0')
            {
                ans += 'C';
            }
            if (str[i] == '1' && str[i + 1] == '1')
            {
                ans += 'G';
            }
        }

        cout << ans << endl;
    }
    return 0;
}