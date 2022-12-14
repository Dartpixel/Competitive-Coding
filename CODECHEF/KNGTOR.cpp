#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n, m;
        cin >> n >> m;
        cout << n * 5 + m * 7 << endl;
    }
    return 0;
}
