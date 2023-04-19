#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,z;
	std::cin >> t;
	while(t--)
	{
	    std::cin >> x>>y>>z;
	    std::cout << (z>=x+y?"Yes":"No") << std::endl;
	}
	return 0;
}