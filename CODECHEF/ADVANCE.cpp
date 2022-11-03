#include <iostream>
using namespace std;

int main() {
	int testcase,x,y;
	cin>>testcase;
	while(testcase--)
	{
	    cin>>x>>y;
	    if(y>x+200 || y<x)
	    {
	        cout<<"NO"<<endl;
	    }
	    else
	    {
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
