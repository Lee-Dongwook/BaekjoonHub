#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <queue>

using namespace std;

int M = INT_MIN;
int n;

int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };

int arr[100][100];
int visited[100][100];

int main(void)
{
	cin >> n;
	int ans = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
			if (M < arr[i][j])
			{
				M = arr[i][j];
			}
		}
	}

	for (int h = 0; h <= M; h++)
	{
		queue<pair<int, int>>q;
		int safe = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (arr[i][j] <= h || visited[i][j] != 0)continue;
				q.push({ i,j });
				safe++;
				while (!q.empty())
				{
					int cur_x = q.front().first;
					int cur_y = q.front().second;

					q.pop();

					for (int dir = 0; dir < 4; dir++)
					{
						int nx = cur_x + dx[dir];
						int ny = cur_y + dy[dir];

						if (nx < 0 || ny < 0 || nx >= n || ny >= n)continue;
						if (visited[nx][ny] != 0 || arr[nx][ny] <= h)continue;
						q.push({ nx,ny });
						visited[nx][ny] = 1;
					}
				}
			}
		}
		if (ans <= safe)
		{
			ans = safe;
		}

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				visited[i][j] = 0;
			}
		}
	}

	cout << ans;
	return 0;
}