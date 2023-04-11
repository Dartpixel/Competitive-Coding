#include <iostream>
using namespace std;

int main() {
	int testcase;
	cin>>testcase;
	
	while(testcase--)
	{
	    int n, k, sum1=0, sum2=0;
	    cin>>n>>k;
	    int a[n];
	    
	    for (int i=0; i<n; i++) {
	        cin>>a[i];
	        sum1 += a[i];
	        
	        if (a[i] > k) a[i] = k;
	        sum2 += a[i];
	    }
	    cout<< sum1-sum2 <<endl;
	}
	return 0;
}