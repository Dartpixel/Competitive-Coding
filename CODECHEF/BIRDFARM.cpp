#include <iostream>
using namespace std;

int main() {
	int testcase;
	cin>>testcase;
	while(testcase--)
	{
	    int x,y,z;
	    cin>>x>>y>>z;
	    if(x%z==0)
	    {
	        cout<<"CHICKEN"<<endl;
	    }
	    else if(y%z==0)
	    {
	        cout<<"DUCK"<<endl;
	    }
	    else if(x==y==z)
	    {
	        cout<<"ANY"<<endl;
	    }
	    else
	    {
	        cout<<"NONE"<<endl;
	    }
	}
	return 0;
}
