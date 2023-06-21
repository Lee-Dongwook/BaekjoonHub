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

	int N;
	cin >> N;

	while (N--)
	{
		int num;
		cin >> num;
		vec.push_back(num);
	}

	sort(vec.begin(), vec.end());

	cout << vec[0]<<" "<< vec[vec.size() - 1];

	return 0;
}