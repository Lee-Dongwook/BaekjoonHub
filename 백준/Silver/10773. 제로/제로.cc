#include <iostream>
#include <stack>
using namespace std;

stack<int> st;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int k;
	cin >> k;

	for (int i = 0; i < k; i++)
	{
		int num;
		cin >> num;
		if (num != 0)
		{
			st.push(num);
		}
		else if (num == 0)
		{
			st.pop();
		}
	}

	int sum = 0;
	while (!st.empty())
	{
		sum += st.top();
		st.pop();
	}

	cout << sum;
	return 0;
}