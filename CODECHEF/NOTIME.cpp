#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int n, h, x;
    cin >> n >> h >> x;
    int arr[n];
    string s = "No";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] + x >= h)
            s = "Yes";
    }
    cout << s << endl;

    return 0;
}