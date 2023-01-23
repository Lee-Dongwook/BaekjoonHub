#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>>A;
int N, M, K, X;
int a, b;
queue<int>q;
vector<int>visited;
vector<int>result;

void bfs(int x)
{
	q.push(x);
	visited[x]++;

	while (!q.empty())
	{
		int n = q.front();
		q.pop();
		for (int i : A[n])
		{
			if (visited[i] == -1)
			{
				visited[i] = visited[n] + 1;
				q.push(i);
			}
		}
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M >> K >> X;

	A.resize(N + 1);

	for (int i = 0; i < M; i++)
	{
		cin >> a >> b;
		A[a].push_back(b);
	}

	visited.resize(N + 1);
	for (int i = 0; i <= N; i++)
	{
		visited[i] = -1;
	}

	bfs(X);

	for (int i = 0; i <= N; i++)
	{
		if (visited[i] == K)
		{
			result.push_back(i);
		}
	}
	if (result.empty())
	{
		cout << -1 << "\n";
	}
	else{
		sort(result.begin(), result.end());
		for (int temp : result)
		{
			cout << temp << "\n";
		}
	}
}