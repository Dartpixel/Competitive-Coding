#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int n, r;
    cin >> n >> r;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= r)
        {
            cout << "Good boi" << endl;
        }
        else
            cout << "Bad boi" << endl;
    }
    return 0;
}