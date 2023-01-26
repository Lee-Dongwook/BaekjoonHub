#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	vector<pair<int, int>>A;
	A.resize(N);

	for (int i = 0; i < N; i++)
	{
		cin >> A[i].second;
		cin >> A[i].first;
	}

	sort(A.begin(), A.end());

	int cnt = 0;
	int end = -1;

	for(int i=0;i<N;i++)
	{
		if (A[i].second >= end)
		{
			end = A[i].first;
			cnt++;
		}
	}

	cout << cnt << "\n";
	return 0;
}