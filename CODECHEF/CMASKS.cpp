#include <iostream>
using namespace std;

int main()
{
    int testcase, a, b;
    cin >> testcase;
    while (testcase--)
    {
        cin >> a >> b;
        int sol = a * 10;
        if (sol == b)
        {
            cout << "Cloth" << endl;
        }
        else if (sol < b)
        {
            cout << "Disposable" << endl;
        }
        else
        {
            cout << "Cloth" << endl;
        }
    }
    return 0;
}
