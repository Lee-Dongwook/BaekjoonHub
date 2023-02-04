#include <iostream>
#include <vector>
using namespace std;

/*

 1. 감소 중일때 = 아무것도 안한다
 2. 값이 같거나 증가중일때 = 하나씩 산다
 3. 값이 최고 값일때 = 판다

 */

vector<int> v;


int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;
	while (T--)
	{
		int N;
		cin >> N;
		long long result = 0;

		for (int i = 0; i < N; i++)
		{
			int tmp;
			cin >> tmp;
			v.push_back(tmp);
		}

		int max = v.back();
		for (int i = v.size() - 2; i >= 0; i--)
		{
			if (v[i] > max)
			{
				max = v[i];
			}
			else
			{
				result += (max - v[i]);
			}
		}
		cout << result << '\n';
		v.clear();
	}

	return 0;
}