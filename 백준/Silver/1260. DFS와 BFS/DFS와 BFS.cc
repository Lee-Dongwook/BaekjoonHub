#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;

int N, M, S;
vector<int>adjList[1001];
bool isvisited[1001] = { false, };
bool issvisited[1001] = { false, };
stack<int>st;
queue<int>que;

void DFS(int V)
{
	st.push(V);

	while (!st.empty())
	{
		int cur = st.top();
		st.pop();

		if (isvisited[cur]) { continue; }
		isvisited[cur] = true;

		cout << cur << " ";

		for (int i = adjList[cur].size() - 1; i >= 0; i--)
		{
			int next = adjList[cur][i];
			st.push(next);
		}
	}
}

void BFS(int V)
{
	que.push(V);
	while (!que.empty())
	{
		int cur = que.front();
		que.pop();

		if (issvisited[cur]) { continue; }
		issvisited[cur] = true;

		cout << cur << " ";

		for (int i = 0; i < adjList[cur].size(); i++)
		{
			int next = adjList[cur][i];
			que.push(next);
		}
	}

}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N >> M >> S;

	for (int i = 0; i < M; i++)
	{
		int u, v;
		cin >> u >> v;

		adjList[u].push_back(v);
		adjList[v].push_back(u);
	}

	for (int i = 0; i < 1001; i++)
	{
		sort(adjList[i].begin(), adjList[i].end());
	}

	DFS(S);
	cout << endl;
	BFS(S);

	return 0;
}