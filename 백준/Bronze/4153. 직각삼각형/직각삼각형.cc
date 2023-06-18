#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a, b, c;

	while (1)
	{
		cin >> a >> b >> c;
		if ((a == 0) && (b == 0) && (c == 0))
		{
			break;
		}

		int m = max(a, max(b, c));

		if (m == a)
		{
			if (a*a == b * b + c * c)
			{
				cout << "right" << "\n";
			}
			else {
				cout << "wrong" << "\n";
			}
		}
		else if (m == b)
		{
			if (b*b == a * a + c * c)
			{
				cout << "right" << "\n";
			}
			else {
				cout << "wrong" << "\n";
			}
		}
		else if (m == c)
		{
			if (c*c == b * b + a * a)
			{
				cout << "right" << "\n";
			}
			else {
				cout << "wrong" << "\n";
			}
		}
		else {
			cout << "wrong" << "\n";
		}

	}
}