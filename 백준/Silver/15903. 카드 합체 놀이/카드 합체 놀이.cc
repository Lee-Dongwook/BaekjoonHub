/*
	문제 풀이 방법
	1. 우선순위 큐로 가장 작은 수 두개 pop
	2. 두 수를 합침
	3. 합친 수를 두번 push (모두 덮어쓰기)
	
	4. 이 과정을 m번 반복
*/

#include <iostream>
#include <queue>
using namespace std;

priority_queue <long long, vector<long long>, greater<long long>> q;
long long sum = 0;
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		long long num;
		cin >> num;
		q.push(num);
	}
	
	while (m--)
	{
		long long x = q.top();
		q.pop();
		long long y = q.top();
		q.pop();
		long long z = x + y;
		q.push(z);
		q.push(z);
	}

	while (!q.empty())
	{
		sum += q.top();
		q.pop();
	}

	cout << sum;
	return 0;
}