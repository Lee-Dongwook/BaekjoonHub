#include <iostream>
#include <algorithm>
using namespace std;

int DP[1000001];

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int x;
	cin >> x;

	DP[0] = 0;
	DP[1] = 0;
	DP[2] = 1;
	DP[3] = 1;

	for (int i = 4; i <= x; i++)
	{
		if ((i % 3 == 0) && (i % 2 == 0))
		{
			DP[i] = min(DP[i / 3] + 1, DP[i /2 ] + 1);
		}
		else if ((i % 3 == 0) && (i % 2 != 0))
		{
			DP[i] = min(DP[i / 3] + 1, DP[i-1] +1);
		}
		else if ((i % 3 != 0) && (i % 2 == 0))
		{
			DP[i] = min(DP[i / 2] + 1,DP[i-1]+1);
		}
		else if((i % 3 != 0) && (i % 2 != 0))
		{
			DP[i] = min(DP[i - 1] + 1, DP[i - 2] + 2);
		}
	}

	cout << DP[x];
	return 0;
}