#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct num {
	int h = 0;
	int i = 0;
	int a = 0;
	int r = 0;
	int c = 0;
};


int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int number;
	cin >> number;

	string S;
	cin >> S;

	struct num n;

	for (int i = 0; i < S.size(); i++)
	{
		if (S[i] == 'H')
		{
			n.h += 1;
		}
		else if (S[i] == 'I')
		{
			n.i += 1;
		}
		else if (S[i] == 'A')
		{
			n.a += 1;
		}
		else if (S[i] == 'R')
		{
			n.r += 1;
		}
		else if (S[i] == 'C')
		{
			n.c += 1;
		}
	}

	vector<int> result;
	
	result.push_back(n.h);
	result.push_back(n.i);
	result.push_back(n.a);
	result.push_back(n.r);
	result.push_back(n.c);

	sort(result.begin(), result.end());

	cout << result[0];


	return 0;


}