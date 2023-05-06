#include <iostream>
#include <algorithm>
using namespace std;

int N;
int House[1001][3];
int DP[1001][3];

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N;
	House[0][0] = 0;
	House[0][1] = 0;
	House[0][2] = 0;
	DP[0][0] = 0;
	DP[0][1] = 0;
	DP[0][2] = 0;

	for (int i = 1; i <= N; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			int num;
			cin >> num;
			House[i][j] = num;
		}
	}

	//집이 1개
	DP[1][0] = House[1][0];
	DP[1][1] = House[1][1];
	DP[1][2] = House[1][2];

	//집이 2개
	DP[2][0] = min(DP[1][1] + House[2][0], DP[1][2] + House[2][0]);
	DP[2][1] = min(DP[1][0] + House[2][1], DP[1][2] + House[2][1]);
	DP[2][2] = min(DP[1][0] + House[2][2], DP[1][1] + House[2][2]);

	for (int i = 3; i <= N; i++)
	{
		DP[i][0] = min(DP[i-1][1] + House[i][0], DP[i-1][2] + House[i][0]);
		DP[i][1] = min(DP[i-1][0] + House[i][1], DP[i-1][2] + House[i][1]);
		DP[i][2] = min(DP[i-1][0] + House[i][2], DP[i-1][1] + House[i][2]);
	}

	int result = min(DP[N][0], min(DP[N][1], DP[N][2]));
	cout << result;
		
	return 0;
}