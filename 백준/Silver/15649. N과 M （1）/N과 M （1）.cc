#include <iostream>
#include <vector>
using namespace std;

int N,M;

vector<vector<int>>result;
vector<int> selected;
vector<bool> isvisited;

void init()
{
    isvisited.resize(N, false);
}

void dfs(int start, int cnt)
{
    if(cnt == 0)
    {
        result.push_back(selected);
        return;
    }
    
    for(int i = 1; i <= N; i++)
    {
        if(!isvisited[i])
        {
          isvisited[i] = true;
          selected.push_back(i);
          dfs(i + 1, cnt - 1);
          selected.pop_back();
          isvisited[i] = false;
        }
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N >> M;
    
    init();
    dfs(1,M);
    
    for(const vector<int>& temp : result)
    {
        for(int tmp : temp){
            cout << tmp << ' ';
        }
        cout<< "\n";
    }
    
    return 0;
}