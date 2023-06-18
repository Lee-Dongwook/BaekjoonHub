#include <iostream>
#include <string>
#include <stack>
using namespace std;

stack<char> st;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int T;
	cin >> T;

	while (T--)
	{
		string ans;
		cin >> ans;

		int a = 0;
		int b = 0;

		for (int i = 0; i < ans.size(); i++)
		{
			if (ans[i] == '(')
			{
				a++;
				st.push(ans[i]);
			}
			else if (ans[i] == ')')
			{
				b++;
				if (st.empty())
				{
					break;
				}
				else {
					st.pop();
				}
			}
		}

		if (a == b) { cout << "YES" << "\n"; }
		else if (a != b) { cout << "NO" << "\n"; }
		
		while (!st.empty()) { st.pop();}

	}
	
	return 0;
}