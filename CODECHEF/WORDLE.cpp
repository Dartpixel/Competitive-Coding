#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        string hidden;
        string guess;
        string ans = "";
        cin >> hidden;
        cin >> guess;
        for (int i = 0; i < hidden.size(); i++)
        {
            if (hidden[i] != guess[i])
            {
                ans += 'B';
            }
            else
            {
                ans += 'G';
            }
        }
        cout << ans << endl;
    }
    return 0;
}