#include <iostream>
#include <map>
using namespace std;

map<int,int> m;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int N;
	cin>>N;
	
	while(N--)
	{
		int num;
		cin>>num;
		m.insert({num,1});
	}
	
	int M;
	cin>>M;
	
	while(M--)
	{
		int num;
		cin>>num;
		
		auto iter = m.find(num);
		if(iter != m.end())
		{
			cout<<1<<"\n";
		}
		else{
			cout<<0<<"\n";
		}
	}
	
	return 0;
}