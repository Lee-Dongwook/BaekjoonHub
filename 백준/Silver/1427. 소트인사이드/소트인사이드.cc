#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<char> vec;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string N;
	cin >> N;

	for (int i = 0; i < N.size(); i++)
	{
		char t = N[i];
		vec.push_back(t);
	}

	sort(vec.begin(), vec.end(), greater<>());

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i];
	}


	return 0;
}