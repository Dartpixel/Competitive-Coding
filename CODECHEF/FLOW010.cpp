#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        char ch;
        cin >> ch;
        switch (ch)
        {
        case 'B':
        case 'b':
            cout << "BattleShip" << endl;
            break;
        case 'C':
        case 'c':
            cout << "Cruiser" << endl;
            ;
            break;
        case 'D':
        case 'd':
            cout << "Destroyer" << endl;
            ;
            break;
        case 'F':
        case 'f':
            cout << "Frigate" << endl;
            ;
            break;
        }
    }
    return 0;
}