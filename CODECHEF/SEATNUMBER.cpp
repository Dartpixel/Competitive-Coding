#include <bits/stdc++.h>
using namespace std;

int main()
{

    int x, seatNo, testcase;

    cin >> testcase;
    while (testcase--)
    {
        cin >> seatNo;

        if (seatNo <= 15)
        {
            if (seatNo <= 10)
            {
                cout << "Lower Double" << endl;
            }
            else
            {
                cout << "Lower Single" << endl;
            }
        }
        else
        {
            if (seatNo <= 25)
            {
                cout << "Upper Double" << endl;
            }
            else
            {
                cout << "Upper Single" << endl;
            }
        }
    }
    return 0;
}