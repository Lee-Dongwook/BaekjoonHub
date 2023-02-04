#include <iostream>

#define MAX 1000000
using namespace std;

int room[MAX];

long long cnt = 0;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> room[i];
	}

	int B, C;
	cin >> B >> C;

	for (int i = 0; i < N; i++)
	{
		room[i] -= B;
	}
	cnt += N; //총감독관

	for (int i = 0; i < N; i++)
	{
		int temp = 0;
		if (room[i] <= 0)continue;
		else {
			if (room[i] % C == 0)
			{
				temp += room[i] / C;
				cnt += temp;
				continue;
			}
			else if (room[i] % C != 0)
			{
				temp += (room[i] / C + 1);
				cnt += temp;
				continue;
			}
		}
	}
	
	

	cout << cnt;

	return 0;
}