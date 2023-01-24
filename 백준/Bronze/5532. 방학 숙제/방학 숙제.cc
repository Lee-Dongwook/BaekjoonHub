#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int L, A, B, C, D;
	cin >> L >> A >> B >> C >> D;

	int res1;
	int res2;

	if (A % C == 0)
	{
		res1 = A / C;
	}
	else if (A % C != 0)
	{
		res1 = A / C + 1;
	}

	if (B % D == 0)
	{
		res2 = B / D;
	}
	else if (B % D != 0)
	{
		res2 = B / D + 1;
	}

	int result = max(res1, res2);

	cout << L - result;
	return 0;
}