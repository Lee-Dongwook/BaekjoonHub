#include <iostream>
#include <cstring>
using namespace std;

int a[51][51] = { 0 };
bool isvisited[51][51] = { 0 };

int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };

int M;
int N;
int K;


void dfs(int x, int y)
{
	isvisited[x][y] = true;
	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < 0 || nx > N || ny < 0 || ny > M)
			continue;
		if (!isvisited[nx][ny] && a[nx][ny] == 1)
		{
			dfs(nx, ny);
		}
	}
}

int main(void)
{
	int T;
	cin >> T;
	for (int i = 1; i <= T; i++)
	{
		cin >> M >> N >> K;
		int cnt = 0;
		for (int i = 0; i < K; i++)
		{
			int x,y;
			cin >> x >> y;
			a[y][x] = 1;
		}

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				if (a[i][j] == 1)
				{
					if (!isvisited[i][j])
					{
						cnt++;
						dfs(i, j);
					}
				}
			}
		}

		cout << cnt << '\n';
		memset(isvisited, false, sizeof(isvisited));
		memset(a, 0, sizeof(a));
	}
}
