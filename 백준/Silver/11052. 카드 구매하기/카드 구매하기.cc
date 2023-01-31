#include <iostream>
#include <algorithm>
using namespace std;

int card[1001];
int DP[1001];
int  main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	cin >> N;
	card[0] = 0;

	for (int i = 1; i <= N; i++)
	{
		cin >> card[i];
	}

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			DP[i] = max(DP[i], DP[i - j] + card[j]);
		}
	}

	cout << DP[N] << endl;

	return 0;
}