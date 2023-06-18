#include <iostream>
#include <queue>
using namespace std;

queue<int> q;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		q.push(i);
	}

	while (q.size() >= 1)
	{
		if (q.size() == 1)
		{
			cout << q.front();
			break;
		}

		q.pop();
		int t = q.front();
		q.pop();
		q.push(t);
	}

	return 0;
}