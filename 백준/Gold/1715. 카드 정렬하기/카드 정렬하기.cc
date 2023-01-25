#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int N;
priority_queue<int, vector<int>, greater<int>> q;
int result = 0;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		q.push(num);
	}

	

		while (q.size() > 1) {
			int a = q.top();
			q.pop();
			int b = q.top();
			q.pop();
			result += (a + b);
			q.push(a + b);
			
		}

	cout << result;
	return 0;
}