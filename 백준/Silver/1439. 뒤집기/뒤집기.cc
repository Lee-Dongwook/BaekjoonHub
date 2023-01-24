#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int a, b = 0;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	string s;
	cin >> s;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] != s[i + 1])
		{
			if (s[i] == '0') { a++;}
			else if (s[i] == '1') { b++;}
		}
	}

	cout << min(a,b) << "\n";
	return 0;
}