#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> res;
map<int, int> m;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;

	while (N--)
	{
		int num;
		cin >> num;
		
		auto item = m.find(num);
		if (item != m.end())
		{
			m[num]++;
		}
		else {
			m.insert({ num, 1 });
		}

	}

	int M;
	cin >> M;

	while (M--)
	{
		int num;
		cin >> num;
		res.push_back(num);
	}

	for (int i = 0; i < res.size(); i++)
	{
		int temp = res[i];
		auto item = m.find(temp);
		if (item != m.end())
		{
			cout << item->second << " ";
		}
		else {
			cout << 0 << " ";
		}
	}

	return 0;
}