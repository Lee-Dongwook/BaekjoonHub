#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int maze[501][501];


int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M, B;
	cin >> N >> M >> B;

	int m = 257; //최소
	int n = -1; //최대

	int anst = 1e9;
	int ansh = -1;

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= M; j++)
		{
			cin >> maze[i][j];
			if (m >= maze[i][j]) {
				m = maze[i][j];
			}
			if (n <= maze[i][j]) {
				n = maze[i][j];
			}
		}
	}




	for (int k = m; k <= n; k++)
	{
		int t = 0;
		int add = 0;
		int sub = 0;

		for (int i = 1; i <= N; i++)
		{
			for (int j = 1; j <= M; j++)
			{
				int block = k - maze[i][j];
				if (block < 0)
				{
					sub += abs(block);
				}
				else {
					add += block;
				}

			}
		}

		if (add <= sub + B)
		{
			t = add + sub * 2;

			if (t <= anst)
			{
				anst = t;
				ansh = k;
			}
		}
	}

	cout << anst << " " << ansh;
}