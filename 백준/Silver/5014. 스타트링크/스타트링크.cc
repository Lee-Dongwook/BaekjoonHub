#include <iostream>
#include <queue>
#include <vector>
#define MAX 1000001
using namespace std;

int F, S, G, U, D;

bool visited[MAX];
int path[MAX];
vector<int> dx;
queue<int> q;

void bfs(int x)
{
	visited[x] = true;
	q.push(x);
	while (!q.empty())
	{
		int cur = q.front();
		q.pop();

		for (int i = 0; i < 2; i++)
		{
			int nx = cur + dx[i];

			if (0 < nx && nx <= F)
			{
				if (!visited[nx])
				{
					visited[nx] = true;
					q.push(nx);
					path[nx] = path[cur] + 1;
				}
			}
		}

		
	}
}


int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	cin >> F >> S >> G >> U >> D;

	dx.push_back(U);
	dx.push_back(D*-1);

	bfs(S);

	if (visited[G])
	{
		cout << path[G];
	}
	else {
		cout << "use the stairs";
	}

	return 0;

}