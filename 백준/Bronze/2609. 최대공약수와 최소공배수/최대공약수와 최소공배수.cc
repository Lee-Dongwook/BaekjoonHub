#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	int c;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int lcm(int a, int b)
{
	return a * b / gcd(a, b);
}

int main(void)
{
	int a, b;
	cin >> a>> b;
	int res1 = gcd(a, b);
	int res2 = lcm(a, b);
	cout << res1 << "\n" << res2;
	return 0;
}