#include <iostream>
using namespace std;

int apt[15][15];

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int T;
	cin >> T;
	for (int i = 1; i <= T; i++)
	{

		int k, n;
		cin >> k >> n;

		for (int i = 1; i <= n; i++)
			apt[0][i] = i;

		for (int i = 1; i <= k; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				apt[i][j] = apt[i - 1][j] + apt[i][j - 1];
			}
		}

		cout << apt[k][n] << endl;
	}

	return 0;
	
}