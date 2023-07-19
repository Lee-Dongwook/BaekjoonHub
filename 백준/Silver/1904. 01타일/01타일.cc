#include <iostream>
using namespace std;

int N;
int DP[1000001];

void init(int N)
{
	DP[0] = 0;
	DP[1] = 1;
	DP[2] = 2;
	for(int i=3;i<=N;i++)
	{
		DP[i] = (DP[i-1] % 15746 + DP[i-2] % 15746) % 15746;
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>N;
	init(N);
	cout<<DP[N];
	
	
	return 0; 
}