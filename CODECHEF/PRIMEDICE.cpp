#include <iostream>
using namespace std;

int main()
{
    int testcase;
    int a, b, i, flag = 0;
    cin >> testcase;
    while (testcase--)
    {
        cin >> a >> b;
        int sol = a + b;
        if (sol == 2 || sol == 3 || sol == 5 || sol == 7 || sol == 11)
            cout << "Alice" << endl;
        else
            cout << "Bob" << endl;
    }
    return 0;
}
