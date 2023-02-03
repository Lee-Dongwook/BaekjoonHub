#include <iostream>
#include <algorithm>
#define INF 987654321
#define MAX 101
using namespace std;

int dist[MAX][MAX];

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N,M;
	cin >> N >> M;

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (i == j) { dist[i][j] = 0; }
			else { dist[i][j] = INF; }
		}
	}
	

	for (int i = 0; i < M; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		dist[a][b] = min(dist[a][b],c);
	}


	for (int k = 1; k <= N; k++)
	{
		for (int i = 1; i <= N; i++)
		{
			for (int j = 1; j <= N; j++)
			{
				dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
			}
		}
	}
	
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (dist[i][j] == INF)
			{
				cout << 0 << " ";
				continue;
			}
			cout << dist[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}