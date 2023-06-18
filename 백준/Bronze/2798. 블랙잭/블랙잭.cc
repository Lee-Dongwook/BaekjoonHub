#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> vec;
vector<int> result;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N, M;
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		vec.push_back(num);
	}

	sort(vec.begin(), vec.end(), greater<>());

	for (int i = 0; i < vec.size(); i++)
	{
		for (int j = i + 1; j < vec.size(); j++)
		{
			for (int k = j + 1; k < vec.size(); k++)
			{
				int sum = 0;
				sum = vec[i] + vec[j] + vec[k];
				result.push_back(sum);
			}
		}
	}

	sort(result.begin(), result.end(), greater<>());

	for (int i = 0; i < result.size(); i++)
	{
		if (result[i] > M)
		{
			continue;
		}
		else {
			cout << result[i];
			break;
		}
	}

	
	return 0;

}