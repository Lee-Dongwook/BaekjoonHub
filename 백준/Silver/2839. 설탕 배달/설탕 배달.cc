#include <iostream>
using namespace std;

int DP[5001];

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	for(int i=0;i<=5000;i++)DP[i] = -1;
	
	DP[3] = 1;
	DP[5] = 1;
	
	int N;
	cin>>N;
	
	for(int i=6;i<=N;i++)
	{
		if(DP[i-3] != -1 && DP[i-5] != -1)
		{
			DP[i] = min(DP[i-3] + 1, DP[i-5] +1 );
		}
		else if(DP[i-3] != -1 && DP[i-5] == -1)
		{
			DP[i] = DP[i-3] + 1;
		}
		else if(DP[i-3] == -1 && DP[i-5] != -1 )
		{
			DP[i] = DP[i-5] + 1;
		}
	}
	
	cout<<DP[N];
	
	return 0;
	
}