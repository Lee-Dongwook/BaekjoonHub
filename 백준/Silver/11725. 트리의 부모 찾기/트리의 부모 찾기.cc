#include <iostream>
#include <vector>
#define MAX 100001
using namespace std;

int N;
vector<int> Tree[MAX];
int parent[MAX];

void dfs(int current, int p) {
    parent[current] = p;
    
    for(int i = 0; i < Tree[current].size(); i++) {
        int next = Tree[current][i];
        if(next != p) {
            dfs(next, current);   
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N;
    
    for(int i = 0; i < N -1; i++) {
        int start, end;
        cin >> start >> end;
        
        Tree[start].push_back(end);
        Tree[end].push_back(start);
    }
    
    dfs(1,0);
    
    for (int i = 2; i <= N; i++) {
        cout << parent[i] << "\n";
    }
    
    return 0;
}