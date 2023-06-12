#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,x;
	    cin >> n >> x;
	    if( n*x >9999 && n*x <=99999) cout << "yes";
	    else cout << "no";
	    cout << endl;
	}
	return 0;
}
