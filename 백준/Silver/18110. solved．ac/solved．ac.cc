#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

vector<int> vec;

/*
	절사 평균 : 30%이면 위에서 15%, 아래에서 15% 제외
	제외되는 사람의 수 위, 아래에서 각각 반올림
	계산된 평균도 정수로 반올림
	6
	0 1/ 2 3 /4 5
*/

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	if (n == 0)
	{
		cout << 0;
		return 0;
	}

	else {

		for (int i = 0; i < n; i++)
		{
			int num;
			cin >> num;
			vec.push_back(num);
		}

		sort(vec.begin(), vec.end(), greater<>());

		double exclude = (double)(n /100.0 * 15.0);
		int member = round(exclude);


		double result = 0.0;

		for (int i = member; i < vec.size() - member; i++)
		{
			result += vec[i];
		}

		int k = vec.size() - 2 * member;

		double res = result / k;

		cout << round(res);

	}
	return 0;

}
