#include<iostream>
using namespace std;

int a[101][101][101] = { 0 };

// -50 -> 0
// -1  -> 49
//   0 -> 50
//   1 -> 51
//  50 -> 100

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 0 /* -50부터 */; i < 101/* 50까지 */; i++)
	{
		for (int j = 0; j < 101; j++)
		{
			for (int k = 0; k < 101; k++)
			{
				if (i <= 50 || j <= 50 || k <= 50)
				{
					a[i][j][k] = 1;
				}
				else if (i > 70 || j > 70 || k > 70)
				{
					a[i][j][k] = a[70][70][70];
				}
				else if ((i > 50 && i <= 70) && (j > 50 && j <= 70) && (k > 50 && k <= 70))
				{
					if ((i < j) && (j < k))
					{
						a[i][j][k] = a[i][j][k - 1] + a[i][j - 1][k - 1] - a[i][j - 1][k];
					}
					else
					{
						a[i][j][k] = a[i - 1][j][k] + a[i - 1][j - 1][k] + a[i - 1][j][k - 1] - a[i - 1][j - 1][k - 1];
					}
				}
			}
		}
	}

	int x, y, z;

	while (1)
	{
		cin >> x >> y >> z;

		if (x == -1 && y == -1 && z == -1) return 0;

		cout <<"w("<<x<<","<<" "<<y<<","<<" "<<z<<")"<<" "<<"="<<" "<< a[x + 50][y + 50][z + 50] << "\n";
	
	}


}
