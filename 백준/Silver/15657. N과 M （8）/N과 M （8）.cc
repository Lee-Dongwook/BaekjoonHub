#include <iostream>
#include <algorithm>
#define MAX 9
using namespace std;

int n, m;
int arr[MAX] = { 0, };
bool visited[MAX] = { 0, };
int result[MAX] = { 0, };
void dfs(int num, int cnt)
{
	if (cnt == m)
	{
		for (int i = 0; i < m; i++)
			cout << arr[i] << ' ';
		cout << '\n';
		return;
	}
	for (int i = num; i <= n; i++)
	{
		visited[i] = true;
		arr[cnt] = result[i-1];
		dfs(i, cnt + 1);
		visited[i] = false;
	}
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		result[i] = num;
	}

	sort(result, result + n);
	dfs(1, 0);
}