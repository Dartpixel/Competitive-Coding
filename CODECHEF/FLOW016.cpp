#include <iostream>
using namespace std;

long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        long long a, b;
        cin >> a >> b;
        long long lcm = a * b;
        cout << gcd(a, b) << " " << lcm / gcd(a, b) << endl;
    }
    return 0;
}
