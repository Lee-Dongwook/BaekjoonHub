#include <iostream>
#include <vector>
#define MAX 200001
#include <queue>
using namespace std;

int N, K;
bool visited[MAX];
queue<pair<int,int>> q;

void BFS(int x)
{
	q.push({ x,0 });
	visited[x] = true;

	while (!q.empty())
	{
		int cur = q.front().first;
		int time = q.front().second;
		q.pop();

		if (cur < 0 || cur >100000)continue;
		if (cur == K)
		{
			cout << time;
			break;
		}
		if (visited[cur * 2] == false)
		{
			visited[cur * 2] = true;
			q.push({ cur * 2,time + 1 });
		}
		if (visited[cur + 1] == false)
		{
			visited[cur + 1] = true;
			q.push({ cur + 1,time + 1 });
		}
		if (visited[cur - 1] == false)
		{
			visited[cur - 1] = true;
			q.push({ cur - 1,time + 1 });
		}
	}
}


int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> K;


	BFS(N);

	return 0;
}
