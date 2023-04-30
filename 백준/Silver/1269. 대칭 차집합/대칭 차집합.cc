#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(void)
{
	map<int, int>m;
	map<int, int>n;

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int A, B;
	cin >> A >> B;

	for (int i = 0; i < A; i++)
	{
		int num;
		cin >> num;
		m.insert(make_pair(num,num));
	}

	for (int j = 0; j < B; j++)
	{
		int num;
		cin >> num;
		n.insert(make_pair(num, num));
	}

	int a = 0;
	int b = 0;

	for (auto iter : m)
	{
		int k = iter.first;

		if (n.find(k) != n.end())
		{
			continue;
		}
		else {
			a++;
		}
	}


	for (auto iter : n)
	{
		int k = iter.first;
		if (m.find(k) != m.end())
		{
			continue;
		}
		else {
			b++;
		}
	}


	cout << a + b;

	return 0;
}

