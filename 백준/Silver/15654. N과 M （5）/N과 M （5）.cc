#include <iostream>
#include <algorithm>
#define MAX 9
using namespace std;

int n, m;
int arr[MAX] = { 0, };
bool visited[MAX] = { 0, };
int result[MAX] = { 0, };

void dfs(int cnt)
{
	if (cnt == m)
	{
		for (int i = 0; i < m; i++)
		{
			cout << arr[i] << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = 1; i <= n; i++)
	{
		if (!visited[i])
		{
			visited[i] = true;
			arr[cnt] = result[i-1];
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
		result[i] = num;
	}

	sort(result, result + n);

	dfs(0);
}