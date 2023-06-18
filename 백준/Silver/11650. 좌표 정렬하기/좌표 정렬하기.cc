#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int>> vec;

bool cmp(pair<int,int> a, pair<int,int>b)
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

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;

		vec.push_back(make_pair(a, b));
	}

	sort(vec.begin(), vec.end(), cmp);

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i].first << " " << vec[i].second << "\n";
	}

	return 0;
}