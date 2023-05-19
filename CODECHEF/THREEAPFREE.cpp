#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> sequence(n);
        for (int i = 0; i < n; i++)
        {
            cin >> sequence[i];
        }

        bool apFree = true;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (sequence[j] - sequence[i] == sequence[k] - sequence[j])
                    {
                        apFree = false;
                        break;
                    }
                }

                if (!apFree)
                {
                    break;
                }
            }

            if (!apFree)
            {
                break;
            }
        }

        if (apFree)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
