#include <iostream>
#include <unordered_map>
using namespace std;

int N, M, sum;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;
	for (int i = 1; i <= T; i++)
	{
		unordered_map<int, bool> m;
		cin >> N;
		for (int i = 0; i < N; i++)
		{
			cin >> sum;
			m[sum] = true;
		}

		cin >> M;

		for (int i = 0; i < M; i++)
		{
			cin >> sum;
			if (m[sum])
				cout << 1 << "\n";
			else
				cout << 0 << "\n";


		}

	}

	return 0;
}