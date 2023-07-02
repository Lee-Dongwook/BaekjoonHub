#include <iostream>
using namespace std;
 
int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
	int t;
	cin >> t;
 
	for (int i = 1; i <= t; i++) {
		
		for (int j = t - i; j > 0; j--) {
			cout << " ";
		}
 
		for (int j = 2*i-1; j > 0; j--) {
			cout << "*";
		}
		cout << "\n";
	}
 
	for (int i = 1; i < t; i++) {
		
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
 
		for (int j = 2*(t-i) -1; j > 0; j--) {
			cout << "*";
		}
		cout << "\n";
	}
}