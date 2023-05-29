#include <iostream>
#include <math.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long int n, k;
        cin >> n;
        cin >> k;

        long long int sum = 1;

        for (long long int i = 1; i < k; i++)
        {
            sum = sum * ((n - k) + i) / i;
        }
        cout << sum << endl;
    }
    return 0;
}
