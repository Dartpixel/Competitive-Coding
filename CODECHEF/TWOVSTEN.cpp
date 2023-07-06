#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        int c = 0;
        
        if (n % 10 == 0) {
            cout << "0" << endl;
            continue;
        } else if (n % 5 != 0 && n % 10 != 0) {
            cout << "-1" << endl;
            continue;
        } else {
            while (n % 10 != 0) {
                n = n * 2;
                c++;
            }
            cout << c << endl;
        }
    }
    
    return 0;
}
