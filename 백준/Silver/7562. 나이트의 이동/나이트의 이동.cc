#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int T, l;
int current_x, current_y, target_x, target_y;
int isvisited[301][301];
int chess[301][301];
int dy[8] = {-2,-1,1,2,2,1,-1,-2};
int dx[8] = {1,2,2,1,-1,-2,-2,-1};

queue<pair<int,int>> q;

void reset() {
	while (!q.empty()) q.pop();
	for (int i = 0; i < 301; i++) {
		for (int j = 0; j < 301; j++) {
			isvisited[i][j] = 0;
			chess[i][j] = 0;
		}
	}
}

void bfs(int x,int y)
{
	q.push({ x,y });
	isvisited[x][y] = true;
	while (!q.empty())
	{
		int a = q.front().first;
		int b = q.front().second;
		q.pop();
		if (a == target_x && b == target_y )
		{
			cout << chess[a][b] << "\n";
			while (!q.empty())
			{
				q.pop();
			}

			break;
		}

		for (int i = 0; i < 8; i++)
		{
			int na = a + dx[i];
			int nb = b + dy[i];
			if (0 <= na && 0 <= nb && na < l && nb < l && !isvisited[na][nb])
			{
				q.push({ na,nb });
				isvisited[na][nb] = true;
				chess[na][nb] = chess[a][b] + 1;
			}
		}
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> l;
		cin >> current_x >> current_y;
		cin >> target_x >> target_y;

		bfs(current_x, current_y);
		reset();
		
	}

}
//참고 : tooo1.tistory.com/171