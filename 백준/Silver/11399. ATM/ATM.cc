#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;

	vector<int>vec;

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		vec.push_back(num);
	}

	sort(vec.begin(), vec.end());

	int sum = 0;

	for (int i = 0; i < vec.size(); i++)
	{
		int temp = 0;

		for (int j = 0; j <= i; j++)
		{
			temp += vec[j];
		}
		sum += temp;
	}

	cout << sum;

	return 0;
	
}