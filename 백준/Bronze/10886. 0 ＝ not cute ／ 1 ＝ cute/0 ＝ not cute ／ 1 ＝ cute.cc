#include <iostream>
#include <vector>
using namespace std;

vector<int> q;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		q.push_back(num);
	}

	int sum = 0;
	int result = 0;

	for (int i = 0; i < q.size(); i++)
	{
		if (q[i] == 0)
		{
			sum++;
		}
		else if (q[i] == 1)
		{
			result++;
		}
	}

	if (result > sum)
	{
		cout << "Junhee is cute!";
	}
	else
	{
		cout << "Junhee is not cute!";
	}
	return 0;
}