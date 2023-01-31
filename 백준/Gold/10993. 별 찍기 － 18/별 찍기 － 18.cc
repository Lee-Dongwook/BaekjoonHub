#include <iostream>
#include <cmath>
using namespace std;

const int MAX = 1024;

char starGraph[MAX][2 * MAX];

void func(int y, int x, int height)
{
	if (height == 1)
	{
		starGraph[y][x] = '*';

		return;
	}

	int row = pow(2, height + 1) - 3;
	int col = pow(2, height) - 1;

	if (height % 2)
	{
		for (int i = 0; i < row; i++)
		{
			starGraph[y + col - 1][x + i] = '*';
		}

		for (int i = 0; i < col - 1; i++)
		{
			starGraph[y + i][x + row / 2 - i] = '*';
			starGraph[y + i][x + row / 2 + i] = '*';
		}

		func(y + col / 2, x + pow(2, height - 1), height - 1);

		return;
	}

	for (int i = 0; i < row; i++)
	{
		starGraph[y][x + i] = '*';
	}

	for (int i = 1; i < col; i++)
	{
		starGraph[y + i][x + i] = '*';
		starGraph[y + i][x + row - (i + 1)] = '*';
	}

	func(y + 1, x + pow(2, height - 1), height - 1);

	return;

}

int main(void)
{
	int N;
	cin >> N;

	func(0, 0, N);

	int row = pow(2, N + 1) - 3;
	int col = pow(2, N) - 1;

	for (int i = 0; i < col; i++)
	{
		if (N % 2)
		{
			for (int j = 0; j < row - col + (i + 1); j++)
			{
				char c = starGraph[i][j] == '*' ? '*' : ' ';

				cout << c;
			}

			cout << "\n";

			continue;
		}

		for (int j = 0; j < row - i; j++)
		{
			char c = starGraph[i][j] == '*' ? '*' : ' ';

			cout << c;
		}

		cout << "\n";
	}

	return 0;
}