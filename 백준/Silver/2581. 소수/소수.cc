#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> a;

int isprime(int n)
{
	int count = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)count++;
	}
	if (count == 2)
	{
		return n;
	}
	else return -1;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int M, N;
	cin >> M >> N;

	int sum = 0;

	for (int i = M; i <= N; i++)
	{
		if (isprime(i) != -1)
		{
			a.push_back(i);
			sum += isprime(i);
		}
	}

	sort(a.begin(), a.end());

	if (!a.empty())
	{
		cout << sum << "\n";
		cout << a[0];
	}
	else if (a.empty())
	{
		cout << -1;
	}

	return 0;
}
	