#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;


typedef pair<int, int> edge; 
vector<vector<edge>> list; //인접리스트
vector<bool> visited;//방문여부
vector<int> mdist;//최소거리
int V, E ,K; //정점, 간선, 가중치
priority_queue<edge, vector<edge>, greater<edge>>q;


int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> V >> E >> K;
	mdist.resize(V + 1);
	fill(mdist.begin(), mdist.end(), INT_MAX);
	visited.resize(V + 1);
	fill(visited.begin(), visited.end(), false);
	list.resize(V + 1);

	for (int i = 0; i < E; i++)
	{
		int u, v, w;
		cin >> u >> v >> w;
		list[u].push_back(make_pair(v, w));
	}

	q.push(make_pair(0, K));
	mdist[K] = 0;

	while (!q.empty())
	{
		edge cur = q.top();
		q.pop();
		int c = cur.second;
		if (visited[c])continue;
		visited[c] = true;

		for (int i = 0; i < list[c].size(); i++)
		{
			edge temp = list[c][i];
			int next = temp.first;
			int value = temp.second;

			if (mdist[next] > mdist[c] + value)
			{
				mdist[next] = mdist[c] + value;
				q.push(make_pair(mdist[next], next));
			}
		}
	}

	for (int i = 1; i <= V; i++)
	{
		if (visited[i])
		{
			cout << mdist[i] << "\n";

		}
		else
		{
			cout << "INF" << "\n";
		}
	}

	return 0;
}