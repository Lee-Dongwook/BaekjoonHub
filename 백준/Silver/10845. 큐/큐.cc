#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	queue<int> q;
	string str;

	for (int i = 0; i < n; i++)
	{
		cin >> str;
		if (str == "push")
		{
			int num;
			cin >> num;
			q.push(num);

		}
		else if (str == "pop")
		{
			if (!q.empty())
			{
				cout << q.front() << endl;
				q.pop();
			}
			else {
				cout << "-1" << endl;
			}
		}
		else if (str == "size")
		{
			cout << q.size() << endl;
		}
		else if (str == "empty")
		{
			if (q.empty())
			{
				cout << "1" << endl;
			}
			else {
				cout << "0" << endl;
			}
		}
		else if (str == "front")
		{
			if (!q.empty())
			{
				cout << q.front() << endl;
			}
			else {
				cout << "-1" << endl;
			}

		}
		else if (str == "back")
		{
			if (!q.empty())
			{
				cout << q.back() << endl;
			}
			else {
				cout << "-1" << endl;
			}
		
		}
	}

	return 0;
}