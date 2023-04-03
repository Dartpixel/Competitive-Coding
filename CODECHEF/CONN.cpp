#include <iostream>
using namespace std;

int main() {
	int testcase;
	cin>>testcase;
	while(testcase--)
	{
	    int n;
	    cin>>n;
	    if (n%2 == 0 || n >= 7)
	    {
	        cout<<"YES";
	    }
	    else
	    {
	        cout<<"NO";
	    }
	    
	    cout<<endl;
	}
	return 0;
}