#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int Pa, Pb, Pc;
        cin >> Pa >> Pb >> Pc;
        if (Pa + Pc >= Pb)
        {
            cout << Pa + Pc << endl;
        }
        else
        {
            cout << Pb << endl;
        }
    }
    return 0;
}