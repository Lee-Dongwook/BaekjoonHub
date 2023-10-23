#include <iostream>
#include <queue>
using namespace std;

int N, M;
int vec[501][501];
bool isvisited[501];
queue<int> q;
int result = 0;

void bfs(int x)
{
    q.push(x);
    isvisited[x] = true;
    while(!q.empty())
    {
        int next = q.front();
        q.pop();
        
        if(next != 1)
        {
            for(int i = 2; i <= N; i++)
            {
                if(vec[next][i] == 1 && isvisited[i] == false)
                {
                    isvisited[i] = true;
                    result += 1;
                    continue;
                }
            }
        }
        else {
            for(int i = 1; i <= N; i++)
            {
                if(vec[1][i] == 1 && isvisited[i] == false)
                {
                    q.push(i);
                    isvisited[i] = true;
                    result += 1;
                }
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
    
    for(int i = 1; i <= M; i++)
    {
        int start, end;
        cin >> start >> end;
        
        vec[start][end] = 1;
        vec[end][start] = 1;
    }
    
    bfs(1);
    
    cout << result;
    
    return 0;
}