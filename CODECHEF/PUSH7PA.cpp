#include <iostream>
#include <map>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        long long int n, x;
        cin >> n;
        map<long long int, long long int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            mp[x]++;
        }
        long long int sol = 0;
        for (auto i : mp)
        {
            sol = max(sol, i.first + (i.second - 1));
        }
        cout << sol << endl;
    }
    return 0;
}
