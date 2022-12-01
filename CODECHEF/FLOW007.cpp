#include<iostream>
using namespace std;
int main(){
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        int n;
        cin>>n;
        int ans=0;
        while(n>0)
        {
            int temp=n%10;
            ans=ans*10+temp;
            n=n/10;
        }
        cout<<ans<<endl;
    }
    return 0;
}
