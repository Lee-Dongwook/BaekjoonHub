#include <iostream>
#include <queue>
#include <vector>
#include <cmath>
using namespace std;

struct comp
{
	bool operator()(int a, int b)
	{
		if (abs(a) == abs(b))
		{
			return a > b;
		}
		else
			return abs(a) > abs(b);
	}
};

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, x;
	cin >> N;

	priority_queue<int, vector<int>, comp> q;

	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;

		if (temp == 0)
		{
			if (q.empty())
			{
				cout << 0 << "\n";
			}
			else
			{
				cout << q.top() << "\n";
				q.pop();
			}
		}
		else
		{
			q.push(temp);
		}
	}

	return 0;
}