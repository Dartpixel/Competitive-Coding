#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a = n % 100;
        int b = a % 50;
        int c = b % 10;
        int d = c % 5;
        int e = d % 2;

        cout << (n / 100) + (a / 50) + (b / 10) + (c / 5) + (d / 2) + e << endl;
    }
    return 0;
}