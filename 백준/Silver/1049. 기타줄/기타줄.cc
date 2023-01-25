#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int N = 0, M = 0, x = 0, y = 0;
	int set = 1000, single = 1000;
	cin >> N >> M;

	while (M--)
	{
		cin >> x >> y;
		set = min(set, x);
		single = min(single, y);
	}

	cout << min((N / 6 + 1)*set, min(N / 6 * set + N % 6 * single, N*single)) << "\n";
	return 0;
}