#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a == 0 && b == 0 && c == 1) || (a == 1 && b == 0 && c == 0) || (a == 0 && b == 1 && c == 0) || (a == 0 && b == 0 && c == 0))
        {
            cout << "Water filling time" << endl;
        }
        if ((a == 0 && b == 1 && c == 1) || (a == 1 && b == 0 && c == 1) || (a == 1 && b == 1 && c == 0) || (a == 1 && b == 1 && c == 1))
        {
            cout << "Not Now" << endl;
        }
    }
    return 0;
}