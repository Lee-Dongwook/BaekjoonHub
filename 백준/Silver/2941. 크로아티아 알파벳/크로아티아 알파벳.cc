#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string word;
	cin >> word;

	int cnt = 0;

	for (int i = 0; i < word.size(); i++)
	{
		cnt++;
		if (word[i] == 'c')
		{
			if (word[i + 1] == '=' || word[i + 1] == '-')
			{
				cnt--;
			}
		}
		else if (word[i] == 'd')
		{
			if (word[i + 1] == 'z')
			{
				if (word[i + 2] == '=')
				{
					cnt--;
				}
			}
			else if (word[i + 1] == '-')
			{
				cnt--;
			}
		}
		else if (word[i] == 'l')
		{
			if (word[i + 1] == 'j')
			{
				cnt--;
			}
		}
		else if (word[i] == 'n')
		{
			if (word[i + 1] == 'j')
			{
				cnt--;
			}
		}
		else if (word[i] == 's')
		{
			if (word[i + 1] == '=')
			{
				cnt--;
			}
		}
		else if (word[i] == 'z')
		{
			if (i == 0)
			{
				if (word[i + 1] == '=')
				{
					cnt--;
				}
				
			}
			else {
				if (word[i + 1] == '=')
				{
					cnt--;
				}
				
			}
		}
		
	}

	cout << cnt;
}