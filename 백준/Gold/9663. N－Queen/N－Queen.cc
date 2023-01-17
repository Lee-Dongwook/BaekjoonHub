#include <iostream>
#include <cmath>
#define MAX 15
using namespace std;

int col[MAX];
int N, result = 0;

bool Check(int level)
{
	for (int i = 0; i < level; i++)
	
		if (col[i] == col[level] || abs(col[i] - col[level]) == level - i)
		
			return false;

		return true;
	
}

void nqueen(int x)
{
	if (x == N) result++;
	else
	{
		for (int i = 0; i < N; i++)
		{
			col[x] = i;
			if (Check(x))
				nqueen(x + 1);
		}
	}
}

int main(void)
{
	cin >> N;
	nqueen(0);
	cout << result;
	return 0;
}