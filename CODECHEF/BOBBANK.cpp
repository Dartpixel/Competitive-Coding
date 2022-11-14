#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int w, x, y, z;
        cin >> w >> x >> y >> z;
        int sol = (w + x * z) - (y * z);
        cout << sol << endl;
    }
    return 0;
}
