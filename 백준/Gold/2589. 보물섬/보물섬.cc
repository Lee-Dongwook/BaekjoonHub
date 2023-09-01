#include <iostream>
#include <queue>
#include <cstring>
#include <algorithm>
#define MAX 51

using namespace std;
int N, M;
char map[MAX][MAX];
int path[MAX][MAX] = {0};
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};
queue<pair<int,int>> q;
int result = 0;

void bfs(int x, int y)
{
    memset(path, 0, sizeof(path));
    q.push({x,y});
    path[x][y] = 1;
    while(!q.empty())
    {
        int cur_x = q.front().first;
        int cur_y = q.front().second;
        
        q.pop();
        
        for(int i=0;i<4;i++)
        {
            int next_x = cur_x + dx[i];
            int next_y = cur_y + dy[i];
            
            if(next_x < 0 || next_x >= N || next_y < 0 || next_y >= M) continue;
            if(path[next_x][next_y])continue;
            if(map[next_x][next_y] == 'W')continue;
            
            path[next_x][next_y] = path[cur_x][cur_y] + 1;
            q.push({next_x,next_y});

            result = max(result, path[next_x][next_y]);            
        }   
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin>>N>>M;
    
    for(int i = 0;i < N; i++)
    {
        for(int j = 0; j < M ; j++)
        {
            cin>>map[i][j];
        }
    }
    
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M ; j++)
        {
            if(map[i][j] == 'L'){
                bfs(i,j);
            }
        }
    }
    
    cout<<result -1 <<"\n";
    
    return 0;
}