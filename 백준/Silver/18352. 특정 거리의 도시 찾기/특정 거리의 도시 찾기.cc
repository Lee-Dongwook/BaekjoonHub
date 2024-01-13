#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int N, M, K, X;

vector<int> vec[300001];
int isvisited[300001];
vector<int> ans;
queue<int> q;

void BFS(int start) {
    q.push(start);
    isvisited[start] += 1;
    
    while(!q.empty()) {
        int current = q.front();
        q.pop(); 
        
        for(int i = 0; i < vec[current].size(); i++) {
            int next = vec[current][i];
            
            if(isvisited[next] == -1) {
                isvisited[next] = isvisited[current] + 1;
                q.push(next);
            }
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N >> M >> K >> X;
    fill(isvisited, isvisited + N + 1, -1);
    
    for(int i = 0; i < M; i++) {
        int start, end;
        cin >> start >> end;
        
        vec[start].push_back(end);
    }
    
    BFS(X);
    
    for(int i = 0; i <= N; i++) {
        if(isvisited[i] == K) {
            ans.push_back(i);
        }
    }
    
    if(ans.empty()) {
        cout << -1 << "\n";
    } else {
        sort(ans.begin(), ans.end());
        
        for(int a : ans) {
            cout << a << "\n";
        }
    }
    
    return 0;
}