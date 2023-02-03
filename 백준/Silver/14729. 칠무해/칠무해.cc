#include <iostream>
#define MAX 10000000
#include <algorithm>
using namespace std;

double arr[MAX];

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + N);

	cout << fixed;
	cout.precision(3);

	for (int i = 0; i < 7; i++)
	{
		cout << arr[i] << "\n";
	}

	return 0;
}