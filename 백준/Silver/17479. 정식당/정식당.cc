#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

map<string, int>m; //일반
map<string, int>n; //특별
map<string, int>o; //서비스

vector<string> food;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int A, B, C;
	cin >> A >> B >> C;

	for (int i = 0; i < A; i++)
	{
		string s;
		int num;
		cin >> s >> num;
		m.insert(make_pair(s, num));
	}

	for (int i = 0; i < B; i++)
	{
		string s;
		int num;
		cin >> s >> num;
		n.insert(make_pair(s, num));
	}

	for (int i = 0; i < C; i++)
	{
		string s;
		cin >> s;
		o.insert(make_pair(s, 1));
	}

	long long sum = 0; // 일반메뉴 총합
	long long tax = 0; // 일반메뉴 + 특별메뉴

	int N;
	cin >> N;
	food.resize(N);

	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;
		food.push_back(s);
	}

	for (int i = 0; i < food.size(); i++)
	{
		auto item = m.find(food[i]);
		if (item != m.end())
		{
			sum += item->second;
		}
	}

	tax = sum;

	int cnt1 = 0;

	for (int i = 0; i < food.size(); i++)
	{
		auto item = n.find(food[i]);
		if (item != n.end())
		{
			cnt1++;
			tax += item->second;
		}
	}

	int cnt2 = 0;

	for (int i = 0; i < food.size(); i++)
	{
		auto item = o.find(food[i]);
		if (item != o.end())
		{
			cnt2++;
		}

	}

	if (sum < 20000)
	{
		if (cnt1 > 0 || cnt2 > 0)
		{
			cout << "No";
		}
		else
		{
			cout << "Okay";
		}
	}
	else if (sum >= 20000)
	{
		if (tax < 50000)
		{
			if (cnt2 > 0)
			{
				cout << "No";
			}
			else
			{
				cout << "Okay";
			}
		}
		else if (tax >= 50000)
		{
			if (cnt2 <= 1)
			{
				cout << "Okay";
			}
			else
			{
				cout << "No";
			}
		}
	}

	return 0;
}