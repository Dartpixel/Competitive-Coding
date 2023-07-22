#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int X, Y, R;
        cin >> X >> Y >> R;
        int A = R / 30;
        int B = X + A;
        if (B % Y > 1)
        {
            cout << (B / Y) + 1 << endl;
        }
        else
        {
            cout << (B / Y) + (B % Y) << endl;
        }
    }

    return 0;
}
