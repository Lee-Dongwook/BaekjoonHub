#include <iostream>
using namespace std;


long long DP[91];


int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	DP[0] = 1;
	DP[1] = 1;
	DP[2] = 2;
	for (int i = 3; i <= N; i++)
	{
		DP[i] = DP[i - 1] + DP[i - 2];
	}

	cout << DP[N - 1];


	return 0;


}