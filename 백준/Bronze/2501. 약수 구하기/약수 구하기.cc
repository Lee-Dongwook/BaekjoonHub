#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> num;

int main(void)
{
	int N, K;
	cin >> N >> K;

	for (int i = 1; i <= N; i++)
	{
		if (N%i == 0)
		{
			num.push_back(i);
		}
	}

	sort(num.begin(), num.end());

	if (num.size() >= K)
	{
		cout << num[K - 1];
	}
	else if(num.size() < K)
	{
		cout << 0;
	}

	return 0;
}