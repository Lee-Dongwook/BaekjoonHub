#include <iostream>
using namespace std;

int num[1001][1001];

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, K;
	cin >> N >> K;

	for (int i = 0; i <= N; i++)
	{
		num[i][1] = i;
		num[i][0] = 1;
		num[i][i] = 1;
	}

	for (int i = 2; i <= N; i++)
	{
		for (int j = 1; j < i; j++)
		{
			num[i][j] = num[i - 1][j] + num[i - 1][j - 1];
			num[i][j] = num[i][j] % 10007;
		}
	}

	cout << num[N][K] << "\n";
	return 0;
}