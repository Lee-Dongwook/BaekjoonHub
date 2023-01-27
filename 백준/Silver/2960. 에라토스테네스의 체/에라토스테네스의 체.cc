#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

	int a[10001];
	int N, K;
	int count = 0;
	cin >> N >> K;

	//2부터 10까지 1로 만들어줍니다
	for (int i = 2; i <= N; i++) {
		a[i] = 1;
	}

	//2부터 배수를 구해 나가면서 1로 되어있으면 0으로 바꿔줍니다. 그리고 카운트 증가
	for (int i = 2; i <= N; i++) {
		for (int j = 1; i * j <= N; j++) {
			if (a[i * j] == 1) {
				a[i * j] = 0;
				count++;

				//카운트가 K와 같아졌을 때의 i*j 곱 출력
				if (count == K) {
					cout << i * j << endl;
					return 0;
				}

			}
		}

	}


}