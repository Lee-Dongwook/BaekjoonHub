#include <iostream>
#include <algorithm>
#define MAX 9
using namespace std;

int n, m;
int arr[MAX] = { 0, };
int res[MAX] = { 0, };
bool visited[MAX] = { 0, };

void dfs(int cnt)
{
	if (cnt == m)
	{
		for (int i = 0; i < m; i++)
		{
			cout << arr[i] << " ";
		}
		cout << "\n";
	}
	int k = 0;
	for (int i = 1; i <= n; i++)
	{
		if (!visited[i] && res[i-1] != k)
		{
			arr[cnt] = res[i - 1];
			k = arr[cnt];
			visited[i] = true;
			dfs(cnt + 1);
			visited[i] = false;
		}
	}
}

int main(void)
{
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		res[i] = num;
	}

	sort(res, res + n);

	dfs(0);
}