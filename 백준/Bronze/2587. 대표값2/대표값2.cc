#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> vec;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int T = 5;
	while (T--)
	{
		int num;
		cin >> num;
		vec.push_back(num);
	}

	sort(vec.begin(), vec.end());

	int sum = 0;

	for (int i = 0; i < vec.size(); i++)
	{
		sum += vec[i];
	}

	cout << sum / 5 << "\n" << vec[2];
	return 0;
}