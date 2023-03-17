#include <iostream>
#include <stack>
using namespace std;

int basket[101];

int main(void)
{
	for (int i = 0; i <= 101; i++)
	{
		basket[i] = i;
	}

	int N, M;
	cin >> N >> M;

	for (int i = 1; i <= M; i++)
	{
		int start;
		int end;

		cin >> start >> end;

		stack<int> st;

		for (int i = start; i <= end; i++)
		{
			st.push(basket[i]);
		}

		for (int i = start; i <= end; i++)
		{
			if (!st.empty())
			{
				int b = st.top();
				basket[i] = b;
				st.pop();
			}
			else {
				return -1;
			}
		}


	}

	for (int i = 1; i <= N; i++)
	{
		cout << basket[i] << " ";
	}

	return 0;
}