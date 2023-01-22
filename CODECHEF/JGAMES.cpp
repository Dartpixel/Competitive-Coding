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
        if ((a - b) % 2 == 0)
        {
            cout << "Janmansh" << endl;
        }
        else
        {
            cout << "Jay" << endl;
        }
    }
    return 0;
}
