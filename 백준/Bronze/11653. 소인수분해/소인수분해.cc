#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	if (N == 1)
	{
		return 0;
	}
	else
	{
		for (int i = 2; i <= N; i++)
		{
			while (N%i == 0)
			{
				cout << i << "\n";
				N /= i;
			}
		}
	}


}