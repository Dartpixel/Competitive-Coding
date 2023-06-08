#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	   // long long c = a*b;
	   // int size = (int) floor( log10(c) ) + 1;
	    if(a<=b){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
