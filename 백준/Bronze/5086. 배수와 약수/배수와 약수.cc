#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	while (1)
	{
		int a, b;
		cin >> a >> b;
		if (a == 0 && b == 0)
		{
			return 0;
		}
		if (b % a == 0 && b >= a)
		{
			cout << "factor" << "\n";
		}
		else if (a % b == 0 && a >= b)
		{
			cout << "multiple" << "\n";
		}
		else {
			cout << "neither" << "\n";
		}
	}
}