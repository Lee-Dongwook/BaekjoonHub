#include <iostream>
#include <queue>
using namespace std;

queue<int> q;
queue<int> res;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, k;
	cin >> n >> k;

	for (int i = 1; i <= n; i++)
	{
		q.push(i);
	}

	while (!q.empty())
	{
		for (int i = 0; i < k - 1; i++)
		{
			int t = q.front();
			q.pop();
			q.push(t);
		}

		int t = q.front();
		res.push(t);
		q.pop();
	}

	cout << "<";
	while (!res.empty())
	{
		if (res.size() > 1) {
			cout << res.front() << ", ";
			res.pop();
		}
		else if (res.size() == 1)
		{
			cout << res.front();
			res.pop();
		}
	}
	cout << ">";
	return 0;

}