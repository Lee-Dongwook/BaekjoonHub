#include <iostream>
#include <string>
#include <map>
using namespace std;

map<string, int>m;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N, M;
	cin >> N >> M;

	int cnt = 0;

	while (N--)
	{
		string name;
		cin >> name;

		m.insert({ name,1 });

	}

	while (M--)
	{
		string result;
		cin >> result;

		auto iter = m.find(result);

		if (iter != m.end())
		{
			cnt++;
		}
		else {
			continue;
		}
	}

	cout << cnt;

	return 0;
}