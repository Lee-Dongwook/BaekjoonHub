#include <iostream>
#include <queue>
#include <cmath>
using namespace std;


struct ComparePair{
bool operator()(pair<int,int> a, pair<int,int>b)
 { 
	if(a.first == b.first)
	{
		return a.second > b.second;
	}
	return abs(a.first) > abs(b.first);
  }
};

priority_queue<pair<int,int>, vector<pair<int,int>>, ComparePair>pq;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int N;
	cin>>N;
	
	while(N--)
	{
		int num;
		cin>>num;
		
		if(num != 0 && num > 0)
		{
			pq.push({num,1});
		}
		else if(num != 0 && num < 0)
		{
			pq.push({abs(num),0});
		}
		else if(num == 0)
		{
			if(pq.empty())
			{
				cout<<0<<"\n";
			}
			else
			{
				if(pq.top().second == 0)
				{
					cout<<-pq.top().first<<"\n";
					pq.pop();
				}
				else if(pq.top().second == 1)
				{
					cout<<pq.top().first<<"\n";
					pq.pop();
				}
			}
		}
		
	}
	
	return 0;
}