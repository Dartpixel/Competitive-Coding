#include <iostream>
using namespace std;
int main()
{
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        int n;
        cin>>n;
        int sum = 0;
        while(n!=0)
        {
            int r = n%10;
            sum+= r;
            n /= 10;
        }

        cout<<sum<<endl;
    }

    return 0;
}
