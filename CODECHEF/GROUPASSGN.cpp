#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	std::cin >> t;
	while(t--){
	    int n,x;
	    std::cin >> n >> x;
	    std::cout << (2*n+1)-x << std::endl;
	}
	return 0;
}