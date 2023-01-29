#include <iostream>
#include <queue>

using namespace std;

queue<int> A;
queue<int> B;
priority_queue<int, vector<int>, greater<int>> q;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		A.push(num);
	}
	for (int i = 0; i < M; i++)
	{
		int num;
		cin >> num;
		B.push(num);
	}

	while (!A.empty())
	{
		int num = A.front();
		q.push(num);
		A.pop();
	}
	while (!B.empty())
	{
		int num = B.front();
		q.push(num);
		B.pop();
	}

	while (!q.empty())
	{
		int num = q.top();
		cout << num << " ";
		q.pop();
	}
	

	return 0;
}