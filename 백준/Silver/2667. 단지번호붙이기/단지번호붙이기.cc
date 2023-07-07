#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;

int map[25][25]; //지도
int N; //지도 크기
bool isvisited[25][25] = {false}; //방문 여부
int dx[4] = {-1,1,0,0};//x좌표 이동
int dy[4] = {0,0,-1,1};//y좌표 이동
vector<int> vec; //단지 수 저장
queue<pair<int,int>>q; //단지 저장

void BFS(int x, int y)
{
    int cnt = 0; //단지 수 카운트
    q.push({x,y});
    isvisited[x][y] = true;
    
    while(!q.empty())
    {
        int cur_x = q.front().first;
        int cur_y = q.front().second;
        cnt++;
        q.pop();
        
        for(int i=0;i<4;i++)
        {
            int next_x = cur_x + dx[i];
            int next_y = cur_y + dy[i];
            
            if(next_x >=0 && next_x < N && next_y >=0 && next_y <N)
            {
                if(map[next_x][next_y] == 1 && !isvisited[next_x][next_y])
                {
                    
                    q.push({next_x,next_y});
                    isvisited[next_x][next_y] = true;
                }
                else{
                	continue;
                }
            }
        }
        
    }
    
   vec.push_back(cnt);
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin>>N;
    
    for(int i=0;i<N;i++)
    {
    	string s;
    	cin>>s;
    	
    	for(int j=0;j<s.size();j++)
    	{
    		map[i][j] = s[j]-'0';
    	}
    }
    
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(map[i][j] == 1 && isvisited[i][j] == false)
            {
            	 BFS(i,j);
            }
        }
    }
    
    sort(vec.begin(),vec.end());
    
    cout<<vec.size()<<"\n";
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<"\n";
    }

    return 0;
}
