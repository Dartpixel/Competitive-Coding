#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        float hardness, carboncontent, tensilestrength;
        cin >> hardness >> carboncontent >> tensilestrength;
        if (hardness > 50 && carboncontent < 0.7 && tensilestrength > 5600)
        {
            cout << "10" << endl;
        }
        else
        {
            if (hardness > 50 && carboncontent < 0.70)
                cout << "9" << endl;
            else if (carboncontent < 0.7 && tensilestrength > 5600)
                cout << "8" << endl;
            else if (hardness > 50 && tensilestrength > 5600)
                cout << "7" << endl;
            else if (hardness > 50 || carboncontent < 0.7 || tensilestrength > 5600)
                cout << "6" << endl;
            else
                cout << "5" << endl;
        }
    }

    return 0;
}