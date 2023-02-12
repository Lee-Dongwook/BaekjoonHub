#pragma warning(disable: 4996)
#include <iostream>

long long dp[1000001];
int main(int argc, char **argv) {
	
	int N;
	scanf("%d", &N);
	long long sum = 0;

	for (int i = 1; i <= 1000001; i++) {
		for (int j = i; j <= 1000001; j += i) {
			dp[j] += i;
		}
	}

	for (int i = 2; i <= 1000001; i++) {
		dp[i] += dp[i - 1];
	}

	printf("%lld\n", dp[N]);

	return 0;
}