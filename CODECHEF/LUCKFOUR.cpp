#include <iostream>
using namespace std;

int main() {
	int testcase,n;
	cin >> testcase;
	while(testcase--)
	{
	    int c=0;
	    cin>>n;
	    while(n>0)
	    {
	        int temp=n%10;
	        if(temp==4)
	        {
	            c++;
	        }
	        n=n/10;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
