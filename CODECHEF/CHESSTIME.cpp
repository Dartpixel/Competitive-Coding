#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n;
        cin >> n;
        cout << (n * 60) / 20 << endl;
    }
    return 0;
}
