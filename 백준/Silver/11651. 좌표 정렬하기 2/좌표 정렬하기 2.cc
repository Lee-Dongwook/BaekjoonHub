#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

vector< pair<int, int>> num;

bool comp(pair<int,int> a, pair<int,int> b)
{
	if (a.second == b.second)
		return a.first < b.first;
	else
		return a.second < b.second;
}


int main(void)
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int a, b;
		cin >> a >> b;
		num.push_back(make_pair(a , b));
	}

	sort(num.begin(), num.end(), comp);

	vector<pair<int, int>>::iterator iter;
	for (iter = num.begin(); iter != num.end(); iter++)
	{
		cout << iter->first << " " << iter->second << "\n";
	}

	return 0;
}