#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

map <string, int> D;
map <string, int> B;

vector<string> vec;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N, M;
	cin >> N >> M;

	while (N--)
	{
		string name;
		cin >> name;
		D.insert({ name,1 });
	}
	while (M--)
	{
		string name;
		cin >> name;
		B.insert({ name,1 });
	}

	for (auto iter = D.begin(); iter != D.end(); iter++)
	{
		auto item = B.find(iter->first);
		if (item != B.end())
		{
			vec.push_back(iter->first);
		}
	}

	sort(vec.begin(), vec.end());

	cout << vec.size() << "\n";

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << "\n";
	}

	return 0;
}