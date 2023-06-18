#include <iostream>
#include <vector>
using namespace std;

vector<int> vec;

int main(void)
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		int num;
		cin >> num;
		vec.push_back(num);
	}

	int sum = 0;

	for (int i = 0; i < vec.size(); i++)
	{
		int t = vec[i];
		int k = 0;

		for (int i = 1; i <= t; i++)
		{
			if (t % i == 0)
			{
				k++;
			}
			else {
				continue;
			}
		}
		if (k == 2)
		{
			sum++;
			continue;
		}
		else {
			continue;
		}
	}
	cout << sum;
	return 0;
}