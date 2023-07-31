#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a;
        int sum = 0;
        for (int i = 0; i < 5; i++)
        {
            cin >> a;
            sum += a;
        }
        if (sum == 0)
            cout << "Beginner\n";
        else if (sum == 1)
            cout << "Junior Developer\n";
        else if (sum == 2)
            cout << "Middle Developer\n";
        else if (sum == 3)
            cout << "Senior Developer\n";
        else if (sum == 4)
            cout << "Hacker\n";
        else if (sum == 5)
            cout << "Jeff Dean\n";
    }
    return 0;
}