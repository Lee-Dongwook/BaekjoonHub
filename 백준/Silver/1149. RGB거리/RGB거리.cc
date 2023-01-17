#include <iostream>
#include <algorithm>
using namespace std;

int DP[1001][3];
int num[1001][3];

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> num[i][j];
		}
	}
	num[0][0] = 0;
	num[0][1] = 0;
	num[0][2] = 0;

	DP[0][0] = 0;
	DP[0][1] = 0;
	DP[0][2] = 0;

	DP[1][0] = 0;
	DP[1][1] = 0;
	DP[1][2] = 0;

	DP[2][0] = min(num[1][1] + num[2][0], num[1][2] + num[2][0]);
	DP[2][1] = min(num[1][0] + num[2][1], num[1][2] + num[2][1]);
	DP[2][2] = min(num[1][0] + num[2][2], num[1][1] + num[2][2]);

	for (int i = 3; i <= N; i++)
	{
		DP[i][0] = min(DP[i-1][1] + num[i][0], DP[i-1][2] + num[i][0]);
		DP[i][1] = min(DP[i-1][0] + num[i][1], DP[i-1][2] + num[i][1]);
		DP[i][2] = min(DP[i-1][0] + num[i][2], DP[i-1][1] + num[i][2]);
	}

	int result = min(DP[N][0], min(DP[N][1], DP[N][2]));

	cout << result;

	return 0;
}