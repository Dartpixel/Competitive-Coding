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
        if (n < 4)
        {
            cout << "MILD" << endl;
        }
        else if (n >= 4 && n < 7)
        {
            cout << "MEDIUM" << endl;
        }
        else
        {
            cout << "HOT" << endl;
        }
    }
    return 0;
}