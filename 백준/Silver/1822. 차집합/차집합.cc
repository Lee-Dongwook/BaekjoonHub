#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
unordered_map<int, int> A;
unordered_map<int, int> B;
int cnt = 0;
vector<int> result;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		int res;
		cin >> res;
		A.insert(make_pair(res, i));
	}
	for (int i = 0; i < M; i++)
	{
		int sum;
		cin >> sum;
		B.insert(make_pair(sum, i));
	}

	for (auto iter = A.begin(); iter != A.end(); iter++)
	{
		int key = iter->first;
		if (B.find(key) != B.end())
		{
			continue;
		}
		else {
			cnt++;
			result.push_back(key);
		}
	}

	sort(result.begin(), result.end());

	cout << cnt << "\n";
	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << " ";
	}

	return 0;
}