#include <iostream>
using namespace std;

int main() {
	int testcase;
	cin>>testcase;
	while(testcase--)
	{
	    int n,x,c;
	    cin>>n>>x>>c;
	    int arr[n];
	    for(int i=0 ;i<n ;i++)
	    {
	        cin>>arr[i];
	    }
	    int ans=0;
	    int count =0;
	    for(int i=0 ;i<n; i++)
	    {
	        if(x-arr[i]>c)
	        {
	            ans=ans+x;
	            count=count+c;
	        }
	        else
	        {
	            ans=ans+arr[i];
	        }
	    }
	    cout<<ans-count<<endl;
	}
	return 0;
}
