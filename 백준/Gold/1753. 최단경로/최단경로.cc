#include <iostream>
#include <vector>
#include <queue>
#define MAX_INT 987654321
using namespace std;

int V, E, K;

vector<pair<int,int>> adjList[20001];
int dist[20001];
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
            
            if(dist[next_position] > next_cost + current_cost)
            {
                dist[next_position] = next_cost + current_cost;
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
    
    cin >> V >> E >> K;
    fill(dist, dist + V + 1, MAX_INT);
    
    for(int i = 0; i < E; i++)
    {
        int start, end, cost;
        cin >> start >> end >> cost;
        
        adjList[start].push_back(make_pair(cost, end));
    }
    
    Dijkstra(K);
    
    for(int i = 1; i <= V; i++)
    {
        if(dist[i] == MAX_INT)
        {
            cout <<"INF"<< "\n";
        } else {
            cout << dist[i] << "\n";
        }
    }
    
    return 0;
}
