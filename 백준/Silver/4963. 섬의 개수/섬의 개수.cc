#include <iostream>
#include <queue>
using namespace std;

int w, h;
int Island[50][50] = {0}; // 배열 크기를 50x50으로 변경
bool isvisited[50][50] = {false};
queue<pair<int, int>> q;

int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

int result = 0;

void BFS(int x, int y) {
    q.push({x, y});
    isvisited[x][y] = true;

    while (!q.empty()) {
        int cur_x = q.front().first;
        int cur_y = q.front().second;

        q.pop();

        for (int i = 0; i < 8; i++) {
            int next_x = cur_x + dx[i];
            int next_y = cur_y + dy[i];

            if (next_x < 0 || next_y < 0 || next_x >= h || next_y >= w) {
                continue;
            }

            if (isvisited[next_x][next_y] || Island[next_x][next_y] == 0) {
                continue;
            }

            q.push({next_x, next_y});
            isvisited[next_x][next_y] = true;
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    while (true) {
        cin >> w >> h;
        if (w == 0 && h == 0) {
            break;
        }

        result = 0;
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                cin >> Island[i][j];
                isvisited[i][j] = false;
            }
        }

        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if (Island[i][j] == 1 && !isvisited[i][j]) {
                    BFS(i, j);
                    result += 1;
                }
            }
        }

        cout << result << '\n';
    }

    return 0;
}
