#include <iostream>
#include <queue>
using namespace std;

priority_queue<int> pq;

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
		
		if(num > 0)
		{
			pq.push(-num);
		}
		else if(num == 0)
		{
			if(pq.empty())
			{
				cout<<0<<"\n";
			}
			else{
			  cout<<-pq.top()<<"\n";
			  pq.pop();
			}
		}
	}
	
	return 0;
}