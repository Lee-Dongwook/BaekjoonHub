#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int N, M;
int lab[8][8];
int tempLab[8][8];
int dx[] = { -1, 1, 0, 0 };
int dy[] = { 0, 0, -1, 1 };
int result = 0;

void bfs() {
    queue<pair<int, int>> q;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            tempLab[i][j] = lab[i][j];
            if (tempLab[i][j] == 2)
                q.push(make_pair(i, j));
        }
    }

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
                if (tempLab[nx][ny] == 0) {
                    tempLab[nx][ny] = 2;
                    q.push(make_pair(nx, ny));
                }
            }
        }
    }
}

int countSafe() {
    int safeArea = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (tempLab[i][j] == 0)
                safeArea++;
        }
    }
    return safeArea;
}

void buildWall(int cnt) {
    if (cnt == 3) {
        bfs();
        result = max(result, countSafe());
        return;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (lab[i][j] == 0) {
                lab[i][j] = 1;
                buildWall(cnt + 1);
                lab[i][j] = 0;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> M;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> lab[i][j];
        }
    }

    buildWall(0);
    
    cout << result << '\n';

    return 0;
}
