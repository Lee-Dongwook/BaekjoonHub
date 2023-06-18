#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<double> vec;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		vec.push_back(num);
	}

	sort(vec.begin(), vec.end(), greater<>());


	double max = vec[0];

	double sum = 0;

	for (int i = 0; i < vec.size(); i++)
	{
		sum += vec[i];
	}

	double result = (sum / max * 100)/ N;
	
	cout << fixed;
	cout.precision(6);
	cout << result;


	return 0;

}