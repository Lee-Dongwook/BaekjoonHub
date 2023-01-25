#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
vector<int> V;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	V.resize(N);
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		V.push_back(num);
	}

	sort(V.begin(), V.end(), greater<>());

	for (int i = 0; i < N; i++)
	{
		V[i] = V[i] - i;
	}

	long long result = 0;

	for (int i = 0; i < N; i++)
	{
		if (V[i] < 0)continue;
		result += V[i];
	}

	cout << result;

	return 0;
}