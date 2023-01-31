#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int name[9];
vector<pair<int,int>> DP;
vector<pair<pair<int, int>, int>>res;
vector<int>key;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	DP.resize(36);
	res.resize(36);
	key.resize(7);

	int cnt = 0;

	for (int i = 0; i < 9; i++)
	{
		cin >> name[i];
	}
	int sum = 0;

	for (int i = 0; i < 9; i++)
	{
		sum += name[i];
	}

	for (int i = 0; i <= 7; i++)
	{
		for (int j = i + 1; j <= 8; j++)
		{
			int k = sum - name[i] - name[j];
			DP.push_back(make_pair(k,cnt));
			res.push_back(make_pair(make_pair(i, j), cnt));
			cnt++;
		}
	}

	int a = 0;
	int b = 0;


	for (int i = 0; i < DP.size(); i++)
	{
		if (DP[i].first == 100)
		{
			a = res[i].first.first;
			b = res[i].first.second;
		}
	}

	for (int i = 0; i < 9; i++)
	{
		if (i == a)continue;
		if (i == b)continue;
		key.push_back(name[i]);
		
	}

	sort(key.begin(), key.end());

	for (int i = 7; i < 14; i++)
	{
		cout << key[i] << "\n";
	}

	return 0;
}