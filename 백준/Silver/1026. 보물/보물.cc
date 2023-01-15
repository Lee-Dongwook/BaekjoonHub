#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> a; //A배열
vector<int> b; //B배열

vector<int> S; //정렬된 B 배열




int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int A;
		cin >> A;
		a.push_back(A);
	}
	for (int i = 0; i < N; i++)
	{
		int B;
		cin >> B;
		b.push_back(B);
	}

	for (int i = 0; i < N; i++)
	{
		S.push_back(b[i]);
	}

	sort(S.begin(), S.end());
	sort(a.begin(), a.end(), greater<>());

	

	int sum = 0;

	for (int i = 0; i < N; i++)
	{
		sum += S[i] * a[i];
	}

	cout << sum;

	return 0;
}
