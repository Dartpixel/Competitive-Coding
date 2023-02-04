#include <iostream>
using namespace std;

int main() {
	int testcase;
	cin>>testcase;
	while(testcase--)
	{
	    int c=0;
	    int x,y,a,b;
	    cin>>x>>y>>a>>b;
	    if(x!=a && x!=b)
	    {
	        c++;
	    }
	    if(y!=a && y!=b)
	    {
	        c++;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
