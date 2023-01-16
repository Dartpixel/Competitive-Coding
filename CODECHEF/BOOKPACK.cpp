#include <iostream>
#define test         \
    int hvycoder;    \
    cin >> hvycoder; \
    while (hvycoder--)
#define JAYSHRIRAM ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(NULL);
using namespace std;

int main()
{

    JAYSHRIRAM

    test
    {
        int x, y, z;
        cin >> x >> y >> z;
        int d = y / z;
        if (y <= z)
        {
            cout << 1 * x << endl;
        }
        else if (y % z == 0)
        {
            cout << d * x << endl;
        }
        else
        {
            cout << (x * d) + x << endl;
        }
    }
    return 0;
}
