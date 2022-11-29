#include <iostream>
using namespace std;

long long coin(long long n)
{
    if (n < 12)
    {
        return n;
    }
    else
    {
        return coin(n / 2) + coin(n / 3) + coin(n / 4);
    }
}

int main()
{
    long long int n;
    while (cin >> n)
    {
        cout << coin(n) << endl;
    }
    return 0;
}
