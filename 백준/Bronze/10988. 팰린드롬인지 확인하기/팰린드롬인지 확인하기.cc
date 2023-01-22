#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
	string s;
	cin >> s;

	string k = s;

	reverse(s.begin(), s.end());

	if (k == s)
	{
		cout << 1 << endl;
	}
	else
	{
		cout << 0 << endl;
	}

	return 0;

}