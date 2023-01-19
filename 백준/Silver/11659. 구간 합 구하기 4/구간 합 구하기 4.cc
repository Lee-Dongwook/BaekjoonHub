#include <iostream>
#define MAX 100001
using namespace std;


int value[MAX];
int sum[MAX];

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	sum[0] = 0;
	value[0] = 0;

	int N,M;
	cin >> N >> M;

	for (int i = 1; i <= N; ++i)
	{
		cin >> value[i];
		sum[i] = sum[i-1] + value[i];
	}

	for (int i = 1; i <= M; i++)
	{
		int a, b;
		cin >> a >> b;

		cout << sum[b] - sum[a-1] << "\n";
	}

	return 0;
}