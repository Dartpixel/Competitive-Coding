#include <iostream>

using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int a, b;
        cin >> a >> b;
        int sol = a * 2;
        int ans = b * 5;
        if (sol > ans)
        {
            cout << "Chocolate" << endl;
        }
        else if (ans > sol)
        {
            cout << "Candy" << endl;
        }
        else
        {
            cout << "Either" << endl;
        }
    }
    return 0;
}
