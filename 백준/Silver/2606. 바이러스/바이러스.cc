#include <iostream>
#include <vector>
#define MAX 101
using namespace std;

int N, M;
int cnt = 0;
vector<int> adjList[MAX];
bool isvisited[MAX];

void DFS(int start)
{
    isvisited[start] = true;
    cnt += 1;
    
    for(int i = 0; i < adjList[start].size(); i++)
    {
        int next = adjList[start][i];
        
        if(isvisited[next] == false)
        {
            DFS(next);
        }
    }
}


int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N >> M;
    
    for(int i = 0; i < M; i++)
    {
        int start, end;
        cin >> start >> end;
        
        adjList[start].push_back(end);
        adjList[end].push_back(start);
    }
    
    DFS(1);
    
    cout << cnt - 1;
    
    return 0;
}