#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	queue<int> q;
	for (int i = 0; i < N; i++)
	{
		string S;
		cin >> S;

		if (S == "size")
		{
			cout << q.size() << "\n";
		}
		else if (S == "empty")
		{
			if (q.empty())
			{
				cout << "1" << "\n";
			}
			else
			{
				cout << "0" << "\n";
			}
		}
		else if (S == "front")
		{
			if (q.empty())
			{
				cout << "-1" << "\n";
			}
			else 
			{
				cout << q.front() << "\n";
			}
		}
		else if (S == "back")
		{
			if (q.empty())
			{
				cout << "-1" << "\n";
			}
			else
			{
				cout << q.back() << "\n";
			}
		}
		else if (S == "push")
		{
			int a;
			cin >> a;
			q.push(a);

		}
		else if (S == "pop")
		{
			if (q.empty())
			{
				cout << "-1" << "\n";
			}
			else
			{
				cout << q.front() << "\n";
				q.pop();
			}
		}
	}

	return 0;
}