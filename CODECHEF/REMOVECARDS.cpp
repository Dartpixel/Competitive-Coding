#include <stdio.h>
int main()
{
    int testcase;
    scanf("%d", &testcase);
    while (testcase--)
    {
        int x, y = -1;
        scanf("%d", &x);
        int arr[x];
        for (int i = 0; i < x; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < x; i++)
        {
            int c = 1;
            for (int j = i + 1; j < x; j++)
            {
                if (arr[i] == arr[j])
                {
                    c++;
                }
            }
            if (c > y)
            {
                y = c;
            }
        }
        printf("%d\n", x - y);
    }
    return 0;
}
