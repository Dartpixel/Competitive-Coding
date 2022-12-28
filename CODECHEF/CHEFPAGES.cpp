#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a == 1 && b == 0)
    {
        cout << "https://www.codechef.com/contests" << endl;
    }
    else if (a == 0 && b == 1)
    {
        cout << "https://www.codechef.com/practice" << endl;
    }
    else if (a == 1 && b == 1)
    {
        cout << "https://discuss.codechef.com" << endl;
    }
    else
    {
        cout << "https://www.codechef.com/practice" << endl;
    }
    return 0;
}
