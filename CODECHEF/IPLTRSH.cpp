#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,m;
	std::cin >> t;
	while(t--)
	{
	    std::cin >> n>>m;
	    if(m>=n)    std::cout << 0 << std::endl;
	    else std::cout << n-m << std::endl;
	}
	return 0;
}