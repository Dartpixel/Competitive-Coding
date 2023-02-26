#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int d, x, y, z;
        cin >> d >> x >> y >> z;
        int ans = x * 7;
        int sol = y * d + z * (7 - d);
        int final = max(ans, sol);
        cout << final << endl;
    }
    return 0;
}
