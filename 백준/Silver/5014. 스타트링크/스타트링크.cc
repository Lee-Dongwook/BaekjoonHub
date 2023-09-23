#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int F, S, G, U, D;

int bfs() {
    vector<bool> visited(F + 1, false);
    queue<pair<int, int>> q;  // 층과 버튼 클릭 횟수를 저장하는 큐
    q.push({S, 0});  // 시작 층과 버튼 클릭 횟수 0으로 초기화
    visited[S] = true;

    while (!q.empty()) {
        int current_floor = q.front().first;
        int clicks = q.front().second;
        q.pop();

        if (current_floor == G) {
            return clicks;  // G층에 도착했을 때 버튼 클릭 횟수 반환
        }

        // U 버튼을 누른 경우
        if (current_floor + U <= F && !visited[current_floor + U]) {
            visited[current_floor + U] = true;
            q.push({current_floor + U, clicks + 1});
        }

        // D 버튼을 누른 경우
        if (current_floor - D >= 1 && !visited[current_floor - D]) {
            visited[current_floor - D] = true;
            q.push({current_floor - D, clicks + 1});
        }
    }

    return -1;  // G층에 도착할 수 없는 경우
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> F >> S >> G >> U >> D;

    int result = bfs();

    if (result == -1) {
        cout << "use the stairs";
    } else {
        cout << result;
    }

    return 0;
}
