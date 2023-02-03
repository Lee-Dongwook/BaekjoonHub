#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a, b;
	cin >> a >> b;

	for (int i = a; i <= min(b, 9989899); i++)
	{
		string str = to_string(i);

		bool flag = false;
		for (int j = 0; j < str.size() / 2; j++)
		{
			if (str[j] != str[str.size() - j - 1])
			{
				flag = true;
				break;
			}
		}

		if (flag)
			continue;

		for (int j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				flag = true;
				break;
			}
		}

		if (!flag)
			cout << i << '\n';
	}

	cout << -1 << '\n';
	return 0;
}