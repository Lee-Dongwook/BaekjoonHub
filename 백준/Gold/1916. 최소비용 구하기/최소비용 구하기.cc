#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

typedef pair<int, int>edge;
vector<vector<edge>>res;
vector<int> mindist;
vector<bool>visited;
priority_queue<edge, vector<edge>, greater<edge>>q;

int N, M;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	cin >> N >> M;
	res.resize(N + 1);
	mindist.resize(N + 1);
	visited.resize(N + 1);

	fill(visited.begin(), visited.end(), false);
	fill(mindist.begin(), mindist.end(), INT_MAX);

	for (int i = 0; i < M; i++)
	{
		int u, v, w;
		cin >> u >> v >> w;
		res[u].push_back(make_pair(v, w));
	}

	int A, B;
	cin >> A >> B;

	q.push(make_pair(0, A));
	mindist[A] = 0;

	while (!q.empty())
	{
		edge cur = q.top();
		q.pop();
		int c = cur.second;
		if (visited[c]) continue;
		visited[c] = true;
		for (int i = 0; i < res[c].size(); i++)
		{
			edge temp = res[c][i];
			int next = temp.first;
			int value = temp.second;

			if (mindist[next] > mindist[c] + value)
			{
				mindist[next] = mindist[c] + value;
				q.push(make_pair(mindist[next], next));
			}
		}
	}

	cout << mindist[B] << "\n";
	return 0;
}