#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int>vec;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N, K;
	cin >> N >> K;

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		vec.push_back(num);
	}

	sort(vec.begin(), vec.end(), greater<>());

	int cnt = 0;

	while (1)
	{
		if (K == 0)
		{
			break;
		}

		for (int i = 0; i < vec.size(); i++)
		{
			int nipple = vec[i];
			int t = K / nipple;
			cnt += t;

			K = K - t * nipple;
		}
	}

	cout << cnt;

	return 0;
}