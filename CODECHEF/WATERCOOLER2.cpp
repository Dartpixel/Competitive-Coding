#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int testcase;
	cin>>testcase;
	while(testcase--)
	{
	    int a,b;
	    cin>>a>>b;
	    int x=b/a;
	    if(x*a<b)
	    {
	        cout<<x<<endl;
	    }
	    else
	    {
	        cout<<x-1<<endl;
	    }
	}
	return 0;
}