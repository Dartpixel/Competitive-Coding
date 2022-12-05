#include <iostream>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int pa, pb, qa, qb;
        cin >> pa >> pb >> qa >> qb;
        int ans = max(pa, pb);
        int sol = max(qa, qb);
        if (ans > sol)
        {
            cout << "Q" << endl;
        }
        else if (ans < sol)
        {
            cout << "P" << endl;
        }
        else
        {
            cout << "TIE" << endl;
        }
    }
    return 0;
}
    