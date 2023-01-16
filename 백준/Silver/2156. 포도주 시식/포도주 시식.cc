#include <iostream>
#include <algorithm>
using namespace std;

int num[10000];
int DP [10000];

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> num[i];
	}

	DP[0] = num[0];
	DP[1] = num[0] + num[1];
	DP[2] = max(num[0] + num[1], max(num[0] + num[2], num[1] + num[2]));
	for (int i = 3; i <= N; i++)
	{
		DP[i] = max(DP[i - 3] + num[i - 1] + num[i], max(DP[i - 2] + num[i], DP[i - 1]));
	}

	cout << DP[N];

	return 0;

}

/*
	N-3까지의 최대값 + N-1번째 값 + N번째 값
	N-2까지의 최대값 + N번째 값
	N-1까지의 최대값

*/