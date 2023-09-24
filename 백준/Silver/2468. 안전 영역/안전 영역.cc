#include <iostream>
#include <queue>
using namespace std;

bool isvisited[101][101];
int map[101][101];

int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};

int n;
int safe;
queue<pair<int,int>>q;

void bfs(int height)
{
    while(!q.empty())
    {
        int cur_x = q.front().first;
        int cur_y = q.front().second;
        
        q.pop();
        
        for(int i = 0; i < 4; i++)
        {
            int next_x = cur_x + dx[i];
            int next_y = cur_y + dy[i];
            
            if(next_x < 0 || next_x >= n || next_y < 0 || next_y >=n)
            {
                continue;
            }
            
            if(map[next_x][next_y] <= height || isvisited[next_x][next_y] == true)
            {
                continue;
            }
            
            isvisited[next_x][next_y] = true;
            q.push({next_x,next_y});
        }
    }
}

void init()
{
    safe = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            isvisited[i][j] = false;
        }
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int height = 0;
    int cnt = 0;
    
    cin>>n;
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin>>map[i][j];
            if(height < map[i][j])
            {
                height = map[i][j];
            }
        }
    }
    
    while(height >= 0)
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(map[i][j] > height && isvisited[i][j] == false)
                {
                    q.push({i,j});
                    bfs(height);
                    safe += 1;
                }
            }
        }
    
    
      if(cnt < safe)
      {
         cnt = safe;
      }
    
      init();
      height--;
   }
   
   cout<<cnt;
   
    return 0;
}