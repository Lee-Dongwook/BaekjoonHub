#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int count = 0;

	int result = 1000 - N;

	while (result != 0)
	{
		if (result / 500 > 0)
		{
			int a = result / 500;
			count += a;
			result = result - 500 * a;
		}
		else if (result / 500 == 0 && result / 100 > 0)
		{
			int b = result / 100;
			count += b;
			result = result - 100 * b;
		}
		else if (result / 500 == 0 && result / 100 == 0 && result / 50 > 0)
		{
			int c = result / 50;
			count += c;
			result = result - 50 * c;
		}
		else if (result / 500 == 0 && result / 100 == 0 && result / 50 == 0 && result / 10 > 0)
		{
			int d = result / 10;
			count += d;
			result = result - 10 * d;
		}
		else if (result / 500 == 0 && result / 100 == 0 && result / 50 == 0 && result / 10 == 0 && result / 5 > 0)
		{
			int e = result / 5;
			count += e;
			result = result - 5 * e;
		}
		else if (result / 500 == 0 && result / 100 == 0 && result / 50 == 0 && result / 10 == 0 && result / 5 == 0 && result / 1 > 0)
		{
			int f = result / 1;
			count += f;
			result = result - 1 * f;
		}
	}

	cout << count;
	return 0;
}
