#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        if (x <= 3)
        {
            cout << "Bronze" << endl;
        }
        if (x > 3 && x <= 6)
        {
            cout << "SILVER" << endl;
        }
        if (x > 6)
        {
            cout << "Gold" << endl;
        }
    }
    return 0;
}
