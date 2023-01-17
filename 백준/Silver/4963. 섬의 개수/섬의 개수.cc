#include <iostream>
#include <cstring>
using namespace std;

int A[50][50] = { 0 };
bool isvisited[50][50] = { 0 };

int dx[8] = { 1,1,0,-1,-1,-1,0,1};
int dy[8] = { 0,1,1,1,0,-1,-1,-1};

int w, h;

void dfs(int y, int x)
{
	for (int i = 0; i < 8; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < 0 || nx >=w || ny < 0 || ny >=h)
			continue;
		if (A[ny][nx] && !isvisited[ny][nx])
		{
			isvisited[ny][nx] = 1;
			dfs(ny, nx);
		}
	}
}

int main(void)
{
	
	while (1)
	{	
		int cnt = 0;
		cin >> w >> h;
		if (w == 0 && h == 0) return 0;

		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < w; j++)
			{
				cin >> A[i][j];
			}
		}


		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < w; j++)
			{
				if (!isvisited[i][j] && A[i][j])
				{
					isvisited[i][j] = 1;
					dfs(i, j);
					cnt++;
				}
			}
		}
		cout << cnt << "\n";
		memset(isvisited, false, sizeof(isvisited));
		memset(A, 0, sizeof(A));
	}


}
