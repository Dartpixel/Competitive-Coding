#include <iostream>
using namespace std;

int main()
{

	int testcase;
	cin >> testcase;
	while (testcase--)
	{
		int x, y;
		cin >> x >> y;
		int p4 = 10 / 4;
		int c4 = p4 * 4;
		int c2 = 10 - c4;
		int p2 = c2 / 2;
		cout << p2 * x + p4 * y << endl;
	}
	return 0;
}
