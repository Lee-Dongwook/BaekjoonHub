#include <iostream>
using namespace std;

int DP[11];

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	DP[0] = 0;
	DP[1] = 1;
	DP[2] = 2;
	DP[3] = 4;

	for (int i = 4; i <= 10; i++)
	{
		DP[i] = DP[i - 1] + DP[i - 2] + DP[i - 3];
	}

	int T;
	cin >> T;
	while (T--)
	{
		int num;
		cin >> num;

		cout << DP[num] << "\n";
	}
	return 0;
}