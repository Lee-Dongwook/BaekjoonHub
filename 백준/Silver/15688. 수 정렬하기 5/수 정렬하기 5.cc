#include <iostream>
#include <vector>
#include<algorithm>
#define MAX 1000000
using namespace std;

vector<int> res;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		res.push_back(num);
	}

	sort(res.begin(), res.end());

	for (int i = 0; i < res.size(); i++)
	{
		cout << res[i] << "\n";
	}

	return 0;
}