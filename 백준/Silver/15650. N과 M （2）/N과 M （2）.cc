#include <iostream>
#define MAX 9 
using namespace std;

int N,M;
int result[MAX] = {0};
bool isvisited[MAX] = {false};

void dfs(int number, int cnt)
{
    if(cnt == M)
    {
        for(int i = 0; i < M; i++)
        {
            cout<<result[i]<<' ';
        }
        cout<<'\n';
        return;
    }
    
    for(int i = number; i <= N; i++)
    {
        if(isvisited[i] == false)
        {
            isvisited[i] = true;
            result[cnt] = i;
            dfs(i+1, cnt+1);
            isvisited[i] = false;
        }
    }
}

int main()
{
    cin>>N>>M;
    dfs(1,0);
}