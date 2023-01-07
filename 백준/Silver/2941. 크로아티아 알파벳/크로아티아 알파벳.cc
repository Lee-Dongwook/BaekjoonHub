#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	string s;
	cin >> s;

	int count = s.size();

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'c' && s[i+1] == '=')
		{
			count--;
		}
		else if (s[i] == 'c' && s[i + 1] == '-')
		{
			count--;
		}
		else if (s[i] == 'd' && s[i + 1] == 'z' && s[i + 2] == '=')
		{
			count--;
		}
		else if (s[i] == 'd' && s[i + 1] == '-')
		{
			count--;
		}
		else if (s[i] == 'l' && s[i + 1] == 'j')
		{
			count--;
		}
		else if (s[i] == 'n' && s[i + 1] == 'j')
		{
			count--;
		}
		else if (s[i] == 's' && s[i + 1] == '=')
		{
			count--;
		}
		else if (s[i] == 'z' && s[i + 1] == '=')
		{
			count--;
		}
	}

	cout << count;
	return 0;
}