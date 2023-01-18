#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int>q; //원본 배열

vector<int>result;//결과 배열

bool visited[1000] = { 0 }; //양의 정수 1~1000
bool isvisited[1000] = { 0 }; //음의 정수 1~1000

bool zero = 0; // 0

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		q.push_back(num);
	}

	for (int i = 0; i < q.size(); i++)
	{
		int temp = q[i];
		if (temp > 0) {
			if (visited[temp - 1] == 0)
			{
				result.push_back(temp);
				visited[temp - 1] = 1;
			}
			else
			{
				continue;
			}
		}
		else if(temp <0)
		{
			if (isvisited[temp + 1000] == 0)
			{
				result.push_back(temp);
				isvisited[temp + 1000] = 1;
			}
			else
			{
				continue;
			}
		}
		else if (temp == 0)
		{
			if (zero == 0)
			{
				result.push_back(temp);
				zero = 1;
			}
			else
			{
				continue;
			}
		}
	}

	sort(result.begin(), result.end());

	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << " ";
	}

	return 0;
}