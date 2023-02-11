#include <iostream>
#include <stack>
#include <string>
using namespace std;

stack<char> st;
stack<char> sr;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	cin >> s;

	for (int i = 0; i < s.size(); i++)
	{
		st.push(s[i]);
	}

	int M;
	cin >> M;
	for (int i = 0; i < M; i++)
	{
		char c;
		cin >> c;

		if (c == 'P')
		{	
			char x;
			cin >> x;
			st.push(x);
		}
		else if (c == 'L')
		{
			if (st.empty()) continue;
			else {
				sr.push(st.top());
				st.pop();
			}
		}
		else if (c == 'D')
		{
			if (sr.empty())continue;
			else {
				st.push(sr.top());
				sr.pop();
			}
		}
		else if (c == 'B')
		{
			if (st.empty())continue;
			st.pop();
		}
	}
	while (!st.empty())
	{
		sr.push(st.top());
		st.pop();
	}
	while (!sr.empty())
	{
		cout << sr.top();
		sr.pop();
	}

	return 0;
}