#include <iostream>
#include <map>
using namespace std;

map<int, int> A;
map<int, int> B;

int cnt = 0;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		A.insert(make_pair(num, i));
	}

	for (int i = 0; i < M; i++)
	{
		int sum;
		cin >> sum;
		B.insert(make_pair(sum, i));
	}

	for (auto iter = A.begin(); iter != A.end(); iter++)
	{
		int res = iter->first;

		if (B.find(res) != B.end())
		{
			continue;
		}
		else {
			cnt++;
		}
	}

	for (auto iter = B.begin(); iter != B.end(); iter++)
	{
		int result = iter->first;
		if (A.find(result) != A.end())
		{
			continue;
		}
		else {
			cnt++;
		}
	}

	cout << cnt << "\n";
	return 0;
}