#include <iostream>
#include <algorithm>
using namespace std;

long long DP[301];
long long stair[301];

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	

	stair[0] = 0;

	int N;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		int num;
		cin >> num;
		stair[i] = num;
	}

	DP[0] = 0;
	DP[1] = stair[1];
	DP[2] = max(stair[2], stair[1] + stair[2]);
	DP[3] = max(stair[2] + stair[3] , stair[1] + stair[3]);

	for (int i = 4; i <= N; i++)
	{
		DP[i] = max(DP[i - 3] + stair[i-1] + stair[i], DP[i - 2] + stair[i]);
	}

	cout << DP[N];
	return 0;
}