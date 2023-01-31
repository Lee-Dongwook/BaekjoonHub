#include <iostream>
using namespace std;

int card[1000][5];
int maxn[1000] = { -1 };
int sum[1000];

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> card[i][j];
		}
	}

	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			sum[i] += card[i][j];
		}
	}


	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 5; j++)
		{
			for (int k = j + 1; k < 5; k++)
			{
				int l = (sum[i] - card[i][j] - card[i][k]) % 10;
				if (l > maxn[i])
					maxn[i] = l;
			}
		}
	}

	int m = maxn[0];
	int p = -1;

	for (int i = 0; i < N; i++)
	{
		if (maxn[i] >= m)
		{
			p = i + 1;
			m = maxn[i];
		}
	}

	cout << p<<"\n";
	return 0;


}