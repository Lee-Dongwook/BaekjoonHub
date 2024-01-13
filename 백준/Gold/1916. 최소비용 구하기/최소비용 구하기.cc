#include <iostream>
#include <vector>
#include <queue>
#define MAX_INT 987654321
using namespace std;

int N, M;
vector<pair<int,int>> adjList[1001];
int dist[1001];
priority_queue<pair<int,int>> pq;

void Dijkstra(int start)
{
    pq.push({0, start});
    dist[start] = 0;
    
    while(!pq.empty())
    {
       int current_cost = -pq.top().first;
       int current_position = pq.top().second;
       pq.pop();
       
       if(dist[current_position] < current_cost) { continue; }
       
       for(int i = 0; i < adjList[current_position].size(); i++)
       {
           int next_cost = adjList[current_position][i].first;
           int next_position = adjList[current_position][i].second;
           
           if(dist[next_position] > current_cost + next_cost)
           {
               dist[next_position] = current_cost + next_cost;
               pq.push({-dist[next_position], next_position});
           }
       }
       
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N >> M;
    fill(dist, dist + N + 1, MAX_INT);
    
    for(int i = 0; i < M; i++)
    {
        int start, end, cost;
        cin >> start >> end >> cost;
        
        adjList[start].push_back(make_pair(cost, end));
    }
    
    int answer_start, answer_end;
    cin >> answer_start >> answer_end;
    
    Dijkstra(answer_start);
    
    cout << dist[answer_end];
    
    return 0;
}