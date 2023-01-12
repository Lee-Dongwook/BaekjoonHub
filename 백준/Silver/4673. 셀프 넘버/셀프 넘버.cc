#include <iostream>
using namespace std;

int isvisited[11000] = { 0 };

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 1; i <= 10000; i++)
	{
		if (i / 10000 == 0 && i/1000==0 && i/100 == 0 && i/10 == 0)
		{
			isvisited[i + i] += 1;
		}
		else if (i / 10000 == 0 && i/1000 == 0 && i / 100 == 0 && i / 10 >= 1)
		{
			isvisited[i + i / 10 + i % 10] += 1;
		}
		else if (i / 10000 == 0 && i/1000==0 && i / 100 >= 1 && i / 10 >= 1)
		{
			int k = i / 100;
			int l = (i - k * 100) / 10;

			isvisited[i + i / 100 +(i-k*100)/ 10 + (i-k*100-l*10) % 10] += 1;
		}
		else if (i / 10000 == 0 && i/1000>=1 && i / 100 >= 1 && i / 10 >= 1)
		{
			int k = i / 1000;
			int l = (i - k * 1000) / 100;
			int m = (i - k * 1000 - l * 100) / 10;

			isvisited[i + i / 1000 + (i-k*1000) / 100 + (i-k*1000-l*100) / 10 + (i-k*1000-l*100-m*10) % 10] += 1;
		}
	}

	for (int i = 1; i <= 10000; i++)
	{
		if (isvisited[i] == 0)
		{
			cout << i << "\n";
		}
	}

	return 0;
}