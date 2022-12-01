#include <iostream>
using namespace std;

int main() {
	int testcase;
	int n,m;
	cin>>testcase;
	while(testcase--)
	{
	    int c=0;
	    cin>>n;
	    int a[n];
	    int b[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0; i<n; i++)
	    {
	        cin>>b[i];
	    }
	    for(int i=0 ;i<n; i++)
	    {
	        if(a[i]>=b[i] && i==0)
	        {
	            c++;
	        }
	        if(a[i]-a[i-1]>=b[i] && i!=0)
	        {
	            c++;
	        }
	    }
	   cout<<c<<endl;
	}
	return 0;
}
