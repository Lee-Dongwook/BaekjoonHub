#include <iostream>
#include <string>
#include <queue>
using namespace std;

queue<char>q;

int main(void)
{
	string s;
	getline(cin, s);

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == ' ')continue;
		else if (s[i] >= 'a' && s[i] <= 'z')continue;
		else
		{
			q.push(s[i]);
		}
	}

	string result;

	while (!q.empty())
	{
		result += q.front();
		q.pop();
	}

	string ans;

	for (int i = 0; i < result.size(); i++)
	{
		if (result[i] == 'U' && ans.empty())
		{
			ans += result[i];
		}
		else if (result[i] == 'C' && ans == "U")
		{
			ans += result[i];
		}
		else if (result[i] == 'P' && ans == "UC")
		{
			ans += result[i];
		}
		else if (result[i] == 'C' && ans == "UCP")
		{
			ans += result[i];
		}
		else continue;
	}

	if (ans == "UCPC")
	{
		cout << "I love UCPC";
	}
	else
	{
		cout << "I hate UCPC";
	}

	return 0;
}