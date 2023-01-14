#include <iostream>
#include <algorithm>
using namespace std;

int bag[101][100001];
int W[101];
int V[101];


int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N,K;
	cin >> N >> K;

	for (int i = 1; i <= N; i++)
		cin >> W[i] >> V[i];

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= K; j++)
		{
			if (j - W[i] >= 0)
			{
				bag[i][j] = max(bag[i - 1][j], V[i] + bag[i - 1][j - W[i]]);
			}
			else
			{
				bag[i][j] = bag[i - 1][j];
			}
		}
	}
	cout << bag[N][K];
	return 0;
}