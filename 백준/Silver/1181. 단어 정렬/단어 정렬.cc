#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

vector<pair<int,string>> vec;
set<pair<int, string>> s;

bool cmp(pair<int,string> a, pair<int,string> b)
{
	if (a.first == b.first)
	{
		return a.second < b.second;
	}

	return a.first < b.first;

}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;

	while (N--)
	{
		string word;
		cin >> word;

		if (s.find(make_pair(word.size(), word)) != s.end())
		{
			continue;
		}
		else {
			s.insert(make_pair(word.size(), word));
			vec.push_back(make_pair(word.size(), word));
		}
		

		
	}
	sort(vec.begin(), vec.end(), cmp);



	for (int i=0;i<vec.size();i++)
	{
		cout << vec[i].second << endl;
	}
	
	return 0;
}