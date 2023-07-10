#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int count=0, count1=0;
        for(int i=0;i<n;i++)
        {
	        if(arr[i]<0)
	        {
	            count++;
	        }
	        else if(arr[i]==0)
	        {
	            count1++;
	        }
	    }
	    if(count1>0) cout<<0<<endl;
	    else if(count%2==0) cout<<0<<endl;
	    else if(count%2==1) cout<<1<<endl;
	}

	return 0;
}
