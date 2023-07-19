#include <iostream>
#include <vector>
using namespace std;

int DP[100001];
vector<int>vec;

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int N;
	cin>>N;
	
	for(int i=0;i<N;i++)
	{
		int num;
		cin>>num;
		vec.push_back(num);
		DP[i] = num;
	}
	
	int max_num = DP[0];
	for(int i=0;i<vec.size();i++)
	{
		DP[i] = max(DP[i], DP[i-1] + vec[i]);
		if(DP[i] > max_num)
		{
			max_num = DP[i];
		}
	}
	
	cout<<max_num;
	
	return 0;
}