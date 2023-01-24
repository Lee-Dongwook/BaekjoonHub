#include <iostream>
#include <algorithm>
#define MAX 1000
using namespace std;

int arr[MAX + 1][MAX + 1] = { 0 };


int N, M;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= M; j++)
		{
			cin >> arr[i][j];
		}
	}
	
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= M; j++)
		{
			
			arr[i][j] += max(max(arr[i - 1][j], arr[i][j - 1]), arr[i - 1][j - 1]);

		}
	}

	cout << arr[N][M] << "\n";
	return 0;
}