#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
using namespace std;

int N, M;
vector<int>adjList[101];
bool isvisited[101] = { 0 , };
stack<int>st;

int DFS(int V)
{
	int cnt = 0;
	st.push(V);
	while (!st.empty())
	{
		int cur = st.top();
		st.pop();

		if(isvisited[cur] == true) { continue; }
		isvisited[cur] = true;
		
		if(cur != 1)
		  cnt++;

		for (int i = adjList[cur].size() - 1; i >= 0; i--)
		{
			int next = adjList[cur][i];
			st.push(next);
		}

	}
	return cnt;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> N >> M;
	while (M--)
	{
		int u, v;
		cin >> u >> v;
		adjList[u].push_back(v);
		adjList[v].push_back(u);
	}
	int result = DFS(1);
	cout << result;
	return 0;
}
