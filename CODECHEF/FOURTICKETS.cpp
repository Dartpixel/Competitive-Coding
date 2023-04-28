#include <iostream>
using namespace std;

int main() {
	int testcase;
	cin>>testcase;
	
	while(testcase--)
	{
	    int n;
	    cin>>n;
	    if(n*4<=1000)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
