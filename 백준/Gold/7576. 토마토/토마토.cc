#include <iostream>
#include <queue>
using namespace std;

int N, M; //상자 가로, 세로 / M이 열, N이 행이 된다.
int map[1000][1000]; //상자
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
bool isvisited[1000][1000] = {false};
queue<pair<int, int>> q; //BFS

void BFS()
{
    while (!q.empty())
    {
        int cur_x = q.front().first;
        int cur_y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int next_x = cur_x + dx[i];
            int next_y = cur_y + dy[i];

            if (next_x >= 0 && next_x < N && next_y >= 0 && next_y < M)
            {
                if (map[next_x][next_y] == 0 && !isvisited[next_x][next_y])
                {
                    isvisited[next_x][next_y] = true;
                    q.push({next_x, next_y});
                    map[next_x][next_y] = map[cur_x][cur_y] + 1;
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

    cin >> M >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            int num;
            cin >> num;
            map[i][j] = num;
            if (map[i][j] == 1)
            {
                q.push({i, j});
                isvisited[i][j] = true;
            }
        }
    }

    BFS();

    int max_days = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (map[i][j] == 0)
            {
                cout << -1 << endl;
                return 0;
            }
            max_days = max(max_days, map[i][j]);
        }
    }

    cout << max_days - 1 << endl;

    return 0;
}
