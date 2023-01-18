#include <iostream>
#include <cmath>
#define MAX 20000001
using namespace std;

int num[MAX];

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	num[1000000] = 0;
	num[1000001] = 1;

	if (N > 1)
	{
		for (int i = 1000002; i <= 1000000 + N; i++)
		{
			num[i] = num[i - 1] + num[i - 2];
			num[i] %= 1000000000;
		}
	}
	else if (N < 0)
	{
		for (int i = 999999; i >= N + 1000000; i--)
		{
			num[i] = num[i + 2] - num[i + 1];
			num[i] %= 1000000000;
		}
	}


	if (num[N+1000000] > 0)
	{
		cout << 1 << "\n";
	}
	else if(num[N+1000000] == 0)
	{
		cout << 0 << "\n";
	}
	else if (num[N+1000000] < 0)
	{
		cout << -1 << "\n";
	}

	cout << abs(num[N +1000000] % 1000000000);

	return 0;
}