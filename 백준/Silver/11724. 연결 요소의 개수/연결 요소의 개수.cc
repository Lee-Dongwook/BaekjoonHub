#include <iostream>
#include <vector>
using namespace std;

int N,M;
vector<int> vec[1001];
bool isvisited[1001];

void DFS(int start)
{
	isvisited[start] = true;
	for(int i=0; i<vec[start].size();i++)
	{
		int next_x = vec[start][i];
		if(isvisited[next_x] == false){
			DFS(next_x);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>N>>M;
	
	while(M--)
	{
		int start, end;
		cin>>start>>end;
		vec[start].push_back(end);
		vec[end].push_back(start);
	}
	
	int res = 0;
	for(int i=1; i<=N; i++)
	{
		if(isvisited[i] == false){
		   DFS(i);
		   res += 1;
		}
	}
	
	cout << res;
	return 0;
}