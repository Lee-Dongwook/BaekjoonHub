#include <iostream>
using namespace std;

long long dp[100];

int main(void)
{
	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 1;
	dp[3] = 2;
	dp[4] = 2;
	for (int i = 5; i < 100; i++)
	{
		dp[i] = dp[i - 1] + dp[i - 5];
	}


	int T;
	cin >> T;
	for (int i = 1; i <= T; i++)
	{
		int num;
		cin >> num;
		cout << dp[num - 1] << "\n";
	}
	return 0;
}