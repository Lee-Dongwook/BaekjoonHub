#include <iostream>
#include <string>
#include <map>
using namespace std;

map<string, string> m;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);


	int N, M;
	cin >> N >> M;

	while (N--)
	{
		string key;
		string value;
		cin >> key >> value;
		m.insert({ key,value });
	}

	while (M--)
	{
		string key;
		cin >> key;

		auto item = m.find(key);
		if (item != m.end())
		{
			cout << item->second << "\n";
		}

	}

	return 0;
}