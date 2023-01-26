#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
vector<int> A;
int cnt = 0;

int main(void)
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	A.resize(N);
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}

	sort(A.begin(), A.end(), greater<>());

	for (int i = 0; i < A.size(); i++)
	{
		if (i % 3 == 2)continue;
		else {
			cnt += A[i];
		}
	}

	cout << cnt;

	return 0;
}