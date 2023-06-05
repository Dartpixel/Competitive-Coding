#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int x = a + b;
    int y = a * b;
    if (x + y == 111)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}