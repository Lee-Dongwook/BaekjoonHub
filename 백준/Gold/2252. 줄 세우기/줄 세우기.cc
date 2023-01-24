#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<vector<int>>A;
vector<int> degree; //진입차수
queue<int> q;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	A.resize(N + 1);
	degree.resize(N + 1);

	for (int i = 0; i < M; i++)
	{
		int a, b;
		cin >> a >> b;
		A[a].push_back(b);
		degree[b]++;
	}

	for (int i = 1; i <= N; i++)
	{
		if (degree[i] == 0)
		{
			q.push(i);
		}
	}

	while (!q.empty())
	{
		int cur = q.front();
		q.pop();
		cout << cur << " ";
		for (int cur : A[cur])
		{
			degree[cur]--;
			if (degree[cur] == 0)
			{
				q.push(cur);
			}
		}
	}
}