#include <iostream>
using namespace std;

int main() {
	int testcase;
	cin>>testcase;
	while(testcase--)
	{
	    int x,y,z;
	    cin>>x>>y>>z;
	    if(x>=y)
	    {
	        if(x%y==0)
	        {
	        cout<<(x/y)*z<<endl;
	        }
	        else
	        {
	            cout<<((x/y)+1)*z<<endl;
	        }
	    }
	    else
	    {
	        cout<<z<<endl;
	    }
	    
	}
	return 0;
}
