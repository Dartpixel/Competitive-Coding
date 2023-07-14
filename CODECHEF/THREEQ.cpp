#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    std::cin >> t;
    while (t--)
    {
        int saint[3], hero[3];
        int sONE = 0, hONE = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> saint[i];
            if (saint[i] == 1)
                sONE++;
        }
        for (int i = 0; i < 3; i++)
        {

            cin >> hero[i];

            if (hero[i] == 1)
                hONE++;
        }

        cout << (sONE == hONE ? "Pass" : "Fail") << std::endl;
    }
    return 0;
}