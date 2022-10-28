#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int c = 0;
        for (int i = 0; i < str.length(); i++)
        {

            if (str[i] == str[i + 1])
            {
                c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}
