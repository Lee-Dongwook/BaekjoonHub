#include <iostream>
#include <set>
using namespace std;

set<int> s;

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
		s.insert(num);
	}


	for (auto it = s.begin(); it != s.end(); it++)
	{
		cout << *it << "\n";
	}

	return 0;
}