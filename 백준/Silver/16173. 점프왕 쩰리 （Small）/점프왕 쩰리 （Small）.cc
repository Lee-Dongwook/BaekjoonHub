#include <iostream>
#include <queue>
using namespace std;

int N;
int maze[3][3];
queue<pair<int,int>> q;
bool visited[3][3] = { false };


int dx[2] = {0,1}; //오른쪽, 아래
int dy[2] = {1,0}; //오른쪽, 아래

int BFS(int x, int y)
{
	q.push({ x,y });
	visited[0][0] = 1;
	while (!q.empty())
	{
		int cur_x = q.front().first;
		int cur_y = q.front().second;
		int move = maze[cur_x][cur_y];
		visited[cur_x][cur_y] = 1;
		q.pop();

		

		for (int i = 0; i < 2; i++)
		{
			int nx = cur_x + move * dx[i];
			int ny = cur_y + move * dy[i];
			if (!visited[nx][ny])
			{
				if (nx < N && ny < N)
				{
					if (maze[nx][ny] == -1)
						return 1;
					q.push({ nx,ny });
				}
				
			}
		}
	}
	return 0;
}
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> maze[i][j];
		}
	}

	int result = BFS(0, 0);

	if (result)
	{
		cout << "HaruHaru" << "\n";
	}
	else
	{
		cout << "Hing" << "\n";
	}


	return 0;
}
