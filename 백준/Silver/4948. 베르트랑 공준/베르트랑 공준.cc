#include <iostream>
#include <cmath> 
#include <cstdio>

using namespace std;

int main() {
	long long n, test, i, j;
	long long cnt = 0;

	while (1) {
		cnt = 0;
		cin >> n;
		if (n == 0) break;

		else if (n == 1) cout << "1"<<"\n";
		
		else {
			for (int i = n + 1;i <= 2 * n;i++) {

				if (i % 2 != 0) {

					for (int j = 3;j <= sqrt(i);j+=2) {
						if (i % j == 0) {
							cnt--;
							break;
						}
					}
					cnt++;
				}

			}
			cout << cnt << "\n";
		}

	}

}