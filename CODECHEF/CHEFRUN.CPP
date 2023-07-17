#include <iostream>
using namespace std;

int main() {
	int testcase;
	cin>>testcase;
	while(testcase--)
	{
	    float x1,x2,x3,v1,v2;
	    cin>>x1>>x2>>x3>>v1>>v2;
	    float ans1=(x3-x1)/v1;
	    float ans2=(x2-x3)/v2;
	    if(ans1>ans2)
	    {
	        cout<<"Kefa"<<endl;
	    }
	    else if(ans1<ans2)
	    {
	        cout<<"Chef"<<endl;
	    }
	    else
	    {
	        cout<<"Draw"<<endl;
	    }
	    
	}
	return 0;
}
