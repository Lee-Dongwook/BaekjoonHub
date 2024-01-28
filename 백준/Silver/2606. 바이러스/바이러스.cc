#include <iostream>
#include <vector>
using namespace std;

int total, connect;
int cnt = 0;
vector<int> vec[101];
bool isvisited[101] = {false, };

void dfs(int start) {
    isvisited[start] = true;
    cnt += 1;
    
    for(int i = 0; i < vec[start].size(); i++) {
        int next = vec[start][i];
        
        if(isvisited[next] == false) {
            isvisited[next] = true;
            dfs(next);
        }
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin >> total >> connect;
    
    while(connect--){
        int start, end;
        cin >> start >> end;
        
        vec[start].push_back(end);
        vec[end].push_back(start);
    }
    
    dfs(1);
    cout << cnt - 1;
    
    return 0;
}