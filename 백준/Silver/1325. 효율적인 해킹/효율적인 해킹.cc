#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

queue<int> q; // BFS
vector<int> ans; //최대값
vector< bool>visited; // 방문 노드 값
vector<vector<int>> A; // 그래프


int N, M;

void bfs(int x)
{
	q.push(x);
	visited[x] = true;
	while (!q.empty())
	{
		int cur = q.front();
		q.pop();

		for (int i : A[cur])
		{
			if (visited[i] == false) {
				visited[i] = true;
				ans[i]++;
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

	cin >> N >> M;
	A.resize(N + 1);
	ans.resize(N + 1);

	for (int i = 0; i < M; i++)
	{
		int a, b;
		cin >> a >> b;
		A[a].push_back(b);
	}

	visited.resize(N + 1);

	for (int i = 0; i <= N; i++)
	{
		fill(visited.begin(), visited.end(), false);
		bfs(i);
	}
	
	int maxVal = 0;

	for (int i = 1; i <= N; i++)
	{
		maxVal = max(maxVal, ans[i]);
	}

	for (int i = 1; i <= N; i++)
	{
		if (ans[i] == maxVal)
		{
			cout << i << " ";
		}
	}


}
