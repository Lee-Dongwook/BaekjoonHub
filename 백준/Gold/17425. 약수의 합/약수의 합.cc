#pragma warning(disable: 4996)
#include <iostream>

long long dp[1000001];
int main(int argc, char **argv) {
	int T, N;
	long long sum = 0;
	scanf("%d", &T);

	for (int i = 1; i <= 1000001; i++) {
		for (int j = i; j <= 1000001; j += i) {
			dp[j] += i;
		}
	}

	for (int i = 2; i <= 1000001; i++) {
		dp[i] += dp[i - 1];
	}

	for (int j = 0; j < T; j++) {
		scanf("%d", &N);
		printf("%lld\n", dp[N]);
	}

	return 0;
}