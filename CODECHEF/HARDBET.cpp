#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        vector<int> ans = {a, b, c};
        int mn = *min_element(ans.begin(), ans.end());
        if (mn == a)
        {
            cout << "Draw" << endl;
        }
        if (mn == b)
        {
            cout << "Bob" << endl;
        }
        if (mn == c)
        {
            cout << "Alice" << endl;
        }
    }
    return 0;
}