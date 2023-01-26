#include <iostream>
#include <queue>

using namespace std;

#define X first
#define Y second

int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int board[501][501];
int vis[501][501];

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	queue<pair<int, int>> q;
	int n, m;
	cin >> n >> m;

	int num = 0;
	int M = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j= 0; j < m; j++)
		{
			cin >> board[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (board[i][j] == 1 && vis[i][j] != 1)
			{
				int width = 0;
				vis[i][j] = 1;
				num++;
				width++;
				q.push({ i,j });
				while (!q.empty())
				{
					pair<int, int> cur = q.front();
					q.pop();

					for (int dir = 0; dir < 4; dir++)
					{
						int nx = cur.X + dx[dir];
						int ny = cur.Y + dy[dir];

						if (nx < 0 || nx >= n || ny < 0 || ny >= m)
						{
							continue;
						}
						if (vis[nx][ny] || board[nx][ny] != 1)
						{
							continue;
						}
						vis[nx][ny] = 1;
						q.push({ nx,ny });
						width++;
					}
				}
				if (M <= width)
				{
					M = width;
				}
			}
		}
	}

	cout << num << "\n" << M;
	return 0;
}