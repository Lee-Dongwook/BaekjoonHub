#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int result = 0;
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	for (int i = N; ; i++)
	{
		string s = to_string(i);
		string k = s;
		reverse(k.begin(), k.end());
		string l = k;
		if (s == l)
		{
			int cnt = 0;
			if (i < 2)
			{
				cout << 2;
				return 0;
			}
			for (int j = 1; j <= i; j++)
			{
				if (i % j == 0)
				{
					cnt++;
				}
			}

			if (cnt == 2) {
				result = i;
				break;
			}

		}
		else
		{
			continue;
		}

	}

	cout << result;
	return 0;
}