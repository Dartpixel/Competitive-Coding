#include <iostream>
using namespace std;

int main() {
	int testcase,w,x,y,z;
	cin>>testcase;
	while(testcase--)
	{
	    cin>>w>>x>>y>>z;
	    if(w>x)
	    {
	        cout<<"overflow"<<endl;
	    }
	    else if(w+y*z<x)
	    {
	        cout<<"unfilled"<<endl;
	    }
	    else if(w+y*z==x)
	    {
	        cout<<"filled"<<endl;
	    }
	    else
	    {
	        cout<<"overflow"<<endl;
	    }
	}
	return 0;
}

