#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


vector<int>A;
int cnt = 0;
int res1 = 0;
int res2 = 0;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	A.resize(N);

	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}

	sort(A.begin(), A.end());

	if (N % 2 == 1)
	{
		int pivot = A[(N + 1) / 2 - 1];
		for (int i = 0; i < A.size(); i++)
		{
			cnt += abs(A[i] - pivot);
		}
		cout << pivot;
	}
	else if (N % 2 == 0)
	{
		int pivot1 = A[N/2-1];
		int pivot2 = A[(N+2)/2-1];
		for (int i = 0; i < A.size(); i++)
		{
			res1 += abs(A[i] - pivot1);
		}
		for (int i = 0; i < A.size(); i++)
		{
			res2 += abs(A[i] - pivot2);
		}

		cnt = min(res1, res2);
		if (cnt == res1)
		{
			cout << pivot1;
		}
		else if (cnt == res2)
		{
			cout << pivot2;
		}
	}


	

	return 0;

}