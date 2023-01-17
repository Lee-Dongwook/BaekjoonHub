#include <iostream>
#include <algorithm>
using namespace std;

int num[501][501] = { 0 };
int DP[501][501] = { 0 };

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cin >> num[i][j];
		}
	}

	DP[1][1] = num[1][1];
	
	for (int i = 2; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			DP[i][j] = max(DP[i - 1][j - 1], DP[i - 1][j]) + num[i][j];
		}
	
	}

	int max = 0;

	for (int i = 1; i <= n; i++)
	{
		if (DP[n][i] > max)
		{
			max = DP[n][i];
		}
	}

	cout << max;
	return 0;
}