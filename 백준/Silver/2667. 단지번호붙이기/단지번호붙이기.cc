#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;

int N;
int map[25][25];
bool isvisited[25][25] = {false, };
queue<pair<int,int>> q;
vector<int> answer;

int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };

void BFS(int x, int y) {
    int cnt = 0;
    q.push({x,y});
    isvisited[x][y] = true;

    while(!q.empty()) {
        int cur_x = q.front().first;
        int cur_y = q.front().second;

        cnt += 1;

        q.pop();

        for(int i = 0; i < 4; i++){
            int next_x = cur_x + dx[i];
            int next_y = cur_y + dy[i];

            if(next_x < 0 || next_x >= N || next_y < 0 || next_y >= N){ continue; }

            if(map[next_x][next_y] == 1 && isvisited[next_x][next_y] == false) {
                q.push({next_x, next_y});
                isvisited[next_x][next_y] = true;
            }
        }
    }

    if(cnt > 0) {
        answer.push_back(cnt);
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N;

    for(int i = 0; i < N; i++) {
        string numList;
        cin >> numList;

        for(int j = 0; j < numList.length(); j++) {
            if(numList[j] == '1') {
                map[i][j] = 1;
            } else {
                map[i][j] = 0;
            }
        }
    }

    for(int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++){
            if(isvisited[i][j] == false && map[i][j] == 1) {
                BFS(i,j);
            }
        }
    }

    sort(answer.begin(), answer.end());

    cout << answer.size() << "\n";

    for(int i = 0; i < answer.size(); i++) {
        cout << answer[i] << "\n";
    }

    return 0;
}
