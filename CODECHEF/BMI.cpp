#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int m, h;
        cin >> m >> h;
        int BMI = (m / (h * h));
        if (BMI <= 18)
            cout << "1" << endl;
        else if (BMI >= 19 && BMI <= 24)
            cout << "2" << endl;
        else if (BMI >= 25 && BMI <= 29)
            cout << "3" << endl;
        else if (BMI >= 30)
            cout << "4" << endl;
    }
    return 0;
}