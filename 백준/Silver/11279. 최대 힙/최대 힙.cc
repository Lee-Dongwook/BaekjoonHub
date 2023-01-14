#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> result;
	int N, x;
	cin >> N;

	priority_queue<int> q;

	for (int i = 0; i < N; i++)
	{
		cin >> x;
		if (x != 0)
		{
			q.push(x);
		}
		else
		{
			if (q.empty())
			{
				result.push_back(0);
			}
			else
			{
				result.push_back(q.top());
				q.pop();
			}
		}
	}

	for (int i = 0; i < result.size(); i++)
		cout << result[i] << "\n";

	return 0;
}