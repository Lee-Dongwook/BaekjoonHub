#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int arr[10001] = { 0, };
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		arr[input]++;
	}

	for (int i = 1; i < 10001; i++)
	{
		if (arr[i])
			for (int j = 0; j < arr[i]; j++)
				cout << i << '\n';
	}
	return 0;
}