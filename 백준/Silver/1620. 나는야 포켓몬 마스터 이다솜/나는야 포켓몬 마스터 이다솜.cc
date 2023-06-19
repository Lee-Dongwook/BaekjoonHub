#include <iostream>
#include <string>
#include <map>
using namespace std;

map<string, int> m;
string arr[100001];

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N, M;
	cin >> N >> M;

	for (int i = 1; i <= N; i++)
	{
		string name;
		cin >> name;
		m.insert({ name,i });
		arr[i] = name;
	}

	for (int i = 1; i <= M; i++)
	{
		string keys;
		cin >> keys;

		if (m.find(keys) != m.end())
		{
			cout << m.find(keys)->second << "\n";
		}
		else {
			int key = stoi(keys);
			cout << arr[key] << "\n";
		}
	}
}