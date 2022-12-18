#include <iostream>
using namespace std;

int main() {
	int testcase;
	cin>>testcase;
	while(testcase--)
	{
	    int a,b,c,d;
	    int n;
	    cin>>n;
	    cin>>a>>b>>c>>d;
	    int ans=max(a,b);
	    int sol=max(c,d);
	    int temp=max(ans,sol);
	    cout<<temp<<endl;
	}
	return 0;
}
