#include <iostream>
using namespace std;

int basket[101];

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	for (int i = 0; i <= 100; i++)
	{
		basket[i] = 0;
	}

	int N, M;
	cin >> N >> M;

	for (int i = 1; i <= M; i++)
	{
		int num;
		int start;
		int end;

		cin >> start >> end >> num;

		for (int j = start; j <= end; j++)
		{
			basket[j] = num;
		}
	}

	for (int i = 1; i <= N; i++)
	{
		cout << basket[i] << " ";
	}

	return 0;

}