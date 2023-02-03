#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<vector<int>> q;
bool visited[150];
stack<int> st;

vector<int>res;

int cnt = 0;
int fi = 0;

void DFS(int x)
{
	st.push(x);

	while (!st.empty())
	{
		int cur = st.top();
		st.pop();

		if (visited[cur])continue;
		visited[cur] = true;
		
		res.push_back(cur);

		for (int i = q[cur].size()-1; i>=0; i--)
		{
			int next = q[cur][i];
			st.push(next);
		}
	}

}


int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int N, K;
	cin >> N >> K;
	q.resize(N);

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		q[i].push_back(num);
	}

	DFS(0);

	for (int i = 0; i < res.size(); i++)
	{
		if (res[i] == K)
		{
			cout << i;
			fi++;
			break;
		}
	}

	if (fi == 0)
	{
		cout << -1;
	}

	return 0;
}