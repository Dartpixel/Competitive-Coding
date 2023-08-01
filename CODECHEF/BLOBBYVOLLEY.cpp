#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int c1 = 0, c2 = 0;
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (s[0] == 'A')
            c1++;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'A' && s[i + 1] == 'A')
                c1++;
            else if (s[i] == 'B' && s[i + 1] == 'B')
                c2++;
        }
        cout << c1 << " " << c2 << endl;
    }
    return 0;
}
