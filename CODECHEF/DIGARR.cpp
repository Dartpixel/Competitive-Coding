#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string str;
	    cin>>str;
	    int b=0;
	    for(int i=0;i<n;i++){
	        if(str[i]=='0' || str[i]=='5'){
	            ++b;
	        }
	    }
	    if(b>0){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}