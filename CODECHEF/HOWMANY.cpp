#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int c = 0;
    while (n > 0)
    {
        int temp = n % 10;
        c++;
        n /= 10;
    }
    if (c > 3)
    {
        cout << "More than 3 digits" << endl;
    }
    else
    {
        cout << c << endl;
    }
    return 0;
}
