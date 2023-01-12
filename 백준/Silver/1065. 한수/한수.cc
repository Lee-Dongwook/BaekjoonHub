#include <iostream>
using namespace std;

int n[1001] = { 0 };
int cnt = 0;

int main(void)
{
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		if (i / 1000 == 0 && i / 100 == 0 && i / 10 == 0)
		{
			n[i] += 1;
		}

		else if (i / 1000 == 0 && i / 100 == 0 && i / 10 >= 1)
		{
			n[i] += 1;
		}

		else if (i / 1000 == 0 && i / 100 >= 1 && i / 10 >= 1)
		{
			int k = i / 100;
			int l = (i - k * 100) / 10;
			if ((i / 100 - (i - k * 100) / 10) == ((i - k * 100) / 10 - (i - k * 100 - l * 10) % 10))
			{
				n[i] += 1;
			}
		}
		
	}

	for (int i = 1; i <= 1000; i++)
	{
		if (n[i] > 0)cnt++;
	}

	cout << cnt;

	return 0;

}