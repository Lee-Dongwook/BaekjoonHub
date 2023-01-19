#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

vector <vector<int>> graph;
vector <int> visited;
int N, M, R, Seq;
queue <int> que;

void input();
void bfs(int n);
void sol();

int main()
{
	input();
	sol();
	return 0;
}

void input()
{
	cin >> N >> M >> R;
	graph.resize(N + 1);
	visited.resize(N + 1);
	int u, v;
	for (int i = 0; i < M; i++) {
		cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	for (int i = 1; i <= N; i++) sort(graph[i].begin(), graph[i].end());
}

void bfs(int n)
{
	int u, graphsize;
	visited[n] = ++Seq;
	que.push(n);
	while (que.size() != 0) {
		u = que.front();
		que.pop();
		graphsize = graph[u].size();
		for (int v = 0; v < graphsize; v++) {
			if (visited[graph[u][v]] == 0) {
				visited[graph[u][v]] = ++Seq;
				que.push(graph[u][v]);
			}
		}
	}
}

void sol()
{
	bfs(R);
	for (int i = 1; i < N + 1; i++)    printf("%d\n", visited[i]);
}