#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

map <char, int> m;
vector<pair<char, int>>vec;

bool cmp(pair<char, int> a, pair<char, int> b)
{
	return a.second > b.second;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string name;
	cin >> name;

	for (int i = 0; i < name.size(); i++)
	{
		char s = tolower(name[i]);
		auto iter = m.find(s);
		if (iter != m.end())
		{
			m[s]++;
		}
		else {
			m.insert({ s,1 });
		}
	}

	for (auto iter = m.begin(); iter != m.end(); iter++)
	{
		vec.push_back(make_pair(iter->first, iter->second));
	}

	sort(vec.begin(), vec.end(), cmp);

	if (vec.size() == 1)
	{
		cout << (char)toupper(vec[0].first);
	}
	else {
		if (vec[0].second == vec[1].second)
		{
			cout << "?";
		}
		else if (vec[0].second > vec[1].second)
		{
			cout << (char)toupper(vec[0].first);
		}
	}

	return 0;
}