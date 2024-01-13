#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define MAX 1001
using namespace std;

int N, M, V;
vector<int> adjList[MAX];
bool isvisited[MAX] = {false , };

void DFS(int start)
{
    isvisited[start] = true;
    cout << start << " ";

    sort(adjList[start].begin(), adjList[start].end());

    for(int i = 0; i < adjList[start].size(); i++)
    {
        int next = adjList[start][i];

        if(isvisited[next] == false)
        {
            DFS(next);
        }
    }
}

void BFS(int start)
{
    queue<int> q;
    q.push(start);
    isvisited[start] = true;

    while(!q.empty())
    {
        int current = q.front();
        q.pop();

        cout << current << " ";
        
        sort(adjList[current].begin(), adjList[current].end());

        for(int i = 0; i < adjList[current].size(); i++)
        {
            int next = adjList[current][i];

            if(isvisited[next] == false)
            {
                q.push(next);
                isvisited[next] = true;
            }
        }
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> M >> V;

    for(int i = 0; i < M; i++)
    {
        int start, end;
        cin >> start >> end;

        adjList[start].push_back(end);
        adjList[end].push_back(start);
    }

    DFS(V);

    fill(isvisited, isvisited + MAX, false);
    
    cout << "\n";

    BFS(V);

    return 0;
}
