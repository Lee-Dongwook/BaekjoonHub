#pragma warning(disable:4996)
#include <iostream>

#include <algorithm>
#define MAX 5000000
using namespace std;

int arr[MAX];

int main(void)
{
	int N, K;
	cin >> N >> K;
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	sort(arr, arr + N);
	printf("%d", arr[K - 1]);
	return 0;
}