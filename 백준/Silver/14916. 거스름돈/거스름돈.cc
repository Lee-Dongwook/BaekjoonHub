#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

int cnt = 0;
vector<int>A;

int main(void)
{
	int n;
	cin >> n;

	if (n < 2)
	{
		cout << -1;
	}
	else if (n >= 2 && n < 5)
	{
		if (n % 2 == 0)
		{
			cnt += n / 2;
			cout << cnt;
		}
		else if (n % 2 != 0)
		{
			cout << -1;
		}
	}
	else if(n >=5 && n % 5 != 0 )
	{
		int temp = n / 5;
		int m;
		for (int i = 0; i <= temp; i++)
		{
			m = n - 5 * i;
			if (m % 2 != 0)continue;
			else {
				A.push_back(i + m / 2);

			}
			
		}
		sort(A.begin(), A.end());

		cout << A[0];
	}
	else if (n >= 5 && n % 5 == 0)
	{
		cout << n / 5;
	}


	

	return 0;
}