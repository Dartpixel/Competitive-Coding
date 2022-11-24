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
        if ((n >= 1) && (n < 100))
        {
            cout << "Easy" << endl;
        }
        else if ((n >= 100) && (n < 200))
        {
            cout << "Medium" << endl;
        }
        else
        {
            cout << "Hard" << endl;
        }
    }
    return 0;
}
