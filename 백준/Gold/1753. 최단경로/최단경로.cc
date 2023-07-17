#include <iostream>
#include <vector>
#include <queue>
#define INF 987654321
using namespace std;

int V,E;
int K;

vector<pair<int, int>> vec[20001];
int D[20001];
priority_queue<pair<int,int>>pq;

void init()
{
	for(int i=0;i<20001;i++)
	{
		D[i] = INF;
	}
}

void Dijikstra(int start)
{
	pq.push({0,start});
	D[start] = 0;
	while(!pq.empty())
	{
		int cur_cost = -pq.top().first; 
		int cur_x = pq.top().second;
		pq.pop();
		
		if(D[cur_x] < cur_cost)
		{
			continue;
		}
		
		for(int i=0;i<vec[cur_x].size();i++)
		{
			int next_x = vec[cur_x][i].second;
			int next_cost = vec[cur_x][i].first;
			if(D[next_x] > cur_cost + next_cost)
			{
				D[next_x] = cur_cost + next_cost;
				pq.push({-D[next_x],next_x});
			}
		}
		
	}
}

int	main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>V>>E;
	cin>>K;
	
	while(E--)
	{
		int start,end,cost;
		cin>>start>>end>>cost;
		
		vec[start].push_back({cost,end});
	}
	
	init();
	Dijikstra(K);
	for(int i=1;i<=V;i++)
	{
		if(D[i] == INF)
		{
			cout<<"INF"<<"\n";
		}
		else{
			cout<<D[i]<<"\n";
		}
	}
	
	return 0;
}