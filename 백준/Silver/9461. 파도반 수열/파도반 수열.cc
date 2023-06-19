#include <iostream>
using namespace std;

long long DP[101];

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	DP[0] = 0;
	DP[1] = 1;
	DP[2] = 1;
	DP[3] = 1;
	DP[4] = 2;
	for (int i = 5; i <= 100;i++)
	{
		DP[i] = DP[i - 1] + DP[i - 5];
	}

	int T;
	cin >> T;
	while (T--)
	{
		int n;
		cin >> n;
		cout << DP[n] << "\n";
	}

	return 0;
}