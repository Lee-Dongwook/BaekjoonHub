#include <iostream>
#include <queue>
#define MAX 102
using namespace std;

int n, target_x, target_y, m;
int cnt = 0;
int arr[MAX][MAX];
int visited[MAX];
queue<int> q;

void bfs(int x)
{
	q.push(x);
	while (!q.empty())
	{
		x = q.front();
		q.pop();
		for (auto i = 1; i <= n; i++)
		{
			if (arr[x][i] != 0 && !visited[i])
			{
				q.push(i);
				visited[i] = visited[x] + 1;
			}
		}
	}
}


int main(void)
{
	cin >> n;
	cin >> target_x >> target_y;
	cin >> m;

	for (int i = 0; i < m; i++)
	{
		int x, y;
		cin >> x >> y;
		arr[x][y] = 1;
		arr[y][x] = 1;
	}

	bfs(target_x);

	if (visited[target_y] == 0)
	{
		visited[target_y] = -1;
	}
	cout << visited[target_y];

}