#include <iostream>
using namespace std;

int main(void)
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int k = n + 1 -i; k >= 1; k--)
		{
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}