#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int T;
	cin >> T;
	while (T--)
	{
		int a, b;
		cin >> a >> b;

		cout << a + b << "\n";
	}


	return 0;
}