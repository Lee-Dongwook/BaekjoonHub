#include <iostream>
#include <vector>
using namespace std;

long long num[1000001];


int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	num[0] = 0;
	num[1] = 1;
	num[2] = 2;
	for (int i = 3; i <= N; i++)
	{
		num[i] = num[i - 1] + num[i - 2];
		num[i] = num[i] % 15746;
	}

	cout << num[N] % 15746;


	return 0;
}