#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

vector<string> vec;
map<string, int> m;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	while (n--)
	{
		string name;
		string toggle;
		cin >> name >> toggle;

		if (toggle == "enter")
		{
			auto iter = m.find(name);
			if (iter != m.end())
			{
				iter->second = 1;
			}
			else {
				m.insert({ name,1 });
			}
		}
		else if (toggle == "leave")
		{
			auto iter = m.find(name);
			if (iter != m.end())
			{
				iter->second = 0;
			}
			else {
				continue;
			}
		}
	}

	for (auto iter = m.begin(); iter != m.end(); iter++)
	{
		if (iter->second == 1)
		{
			vec.push_back(iter->first);
		}
		else if (iter->second == 0)
		{
			continue;
		}
	}
	
	sort(vec.begin(), vec.end(), greater<>());

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << "\n";
	}


	return 0;
}