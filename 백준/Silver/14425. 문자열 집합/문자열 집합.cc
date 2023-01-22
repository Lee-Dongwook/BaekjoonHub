#include <iostream>
#include <string>
#include <map>
using namespace std;

map <string, int> m;
int cnt = 0;

int main(void)
{
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;
		m.insert(make_pair(s, i));
	}

	for (int i = 0; i < M; i++)
	{
		string k;
		cin >> k;

		string key = k;

		if (m.count(key) != 0)
		{
			cnt++;
		}
		else
		{
			continue;
		}
	}

	cout << cnt << "\n";
	return 0;

}