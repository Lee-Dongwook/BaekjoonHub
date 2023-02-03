#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> res;
vector<int> ans;
int sum = 0;
int cnt = 0;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	res.resize(N+1);
	ans.resize(N + 1);

	for (int i = 1; i <= N; i++)
	{
		res[i] += i;
	}

	for (int i = 1; i <= N; i++)
	{
		sum = 0;
		string k = to_string(i);
		for (int j = 0; j < k.size(); j++)
		{
			int c = k[j]-'0';
			sum += c;
		}
		res[i] += sum;
	}

	for (int i = 1; i < res.size(); i++)
	{
		if (res[i] == N)
		{
			cnt++;
			cout << i;
			break;
		}
	}

	if (cnt == 0)
	{
		cout << 0;
	}

	return 0;
}