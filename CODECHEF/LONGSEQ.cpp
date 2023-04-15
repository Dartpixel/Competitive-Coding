#include <iostream>

#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int x = 0, y = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                x++;
            }
            else
            {
                y++;
            }
        }
        if (x == 1 || y == 1)
        {
            cout << "Yes \n";
        }
        else
        {
            cout << "No \n";
        }
    }
    return 0;
}