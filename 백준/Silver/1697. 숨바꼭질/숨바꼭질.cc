#include <iostream>
#include <queue>
using namespace std;

int N,K;
int line[100001];
bool isvisited[100001];
queue<int> q;

void init()
{
	for(int i=0;i<100001;i++)
	{
		line[i] = 0;
		isvisited[i] = false;
	}
}

void BFS(int start)
{
	q.push(start);
	isvisited[start] = true;
	
	while(!q.empty())
	{
		int cur_x = q.front();
		q.pop();
		
		if(cur_x == K)
		{
			break;
		}
		if(cur_x + 1 >= 0 && cur_x + 1 < 100001)
		{
			if(!isvisited[cur_x + 1])
			{
				isvisited[cur_x + 1] = true;
				line[cur_x + 1] = line[cur_x] + 1;
				q.push(cur_x + 1);
			}
		}
		if(cur_x - 1 >= 0 && cur_x - 1 < 100001)
		{
			if(!isvisited[cur_x - 1])
			{
				isvisited[cur_x - 1] = true;
				line[cur_x - 1] = line[cur_x] + 1;
				q.push(cur_x -1);
			}
		}
		if(cur_x * 2 >= 0 && cur_x * 2 < 100001)
		{
			if(!isvisited[cur_x * 2])
			{
				isvisited[cur_x * 2] = true;
				line[cur_x * 2] = line[cur_x] + 1;
				q.push(cur_x * 2);
			}
		}
	}
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>N>>K;
	BFS(N);
	cout<<line[K];
	
	
	return 0;
}