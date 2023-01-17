#include <iostream>
using namespace std;

int find(int a, int b)
{
    return b == 0 ? a : find(b, a % b);
}

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n, m;
        cin >> n >> m;
        cout << find(n, m) << endl;
    }
    return 0;
}
