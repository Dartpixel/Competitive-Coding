#include <iostream>
using namespace std;

int main() {
	int testcase;
	cin>>testcase;
	while(testcase--)
	{
	    int n,x,p;
	    cin>>n>>x>>p;
	    int incorrect=n-x;
	    int temp=x*3;
	    int flag=(-1)*incorrect;
	    if(temp+flag>=p)
	    {
	        cout<<"PASS"<<endl;
	    }
	    else
	    {
	        cout<<"FAIL"<<endl;
	    }
	}
	return 0;
}
