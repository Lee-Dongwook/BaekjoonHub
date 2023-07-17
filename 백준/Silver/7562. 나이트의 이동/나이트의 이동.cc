#include <iostream>
#include <queue>
using namespace std;

int T, N;
int dx[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int chess[301][301];

int BFS(int x, int y, int a, int b)
{
    if (x == a && y == b)
        return 0; 

    queue<pair<int, int>> q;
    q.push({x, y});
    chess[x][y] = 0;

    while (!q.empty())
    {
        int cur_x = q.front().first;
        int cur_y = q.front().second;
        q.pop();

        if (cur_x == a && cur_y == b)
            return chess[cur_x][cur_y];

        for (int i = 0; i < 8; i++)
        {
            int next_x = cur_x + dx[i];
            int next_y = cur_y + dy[i];

            if (next_x < 0 || next_x >= N || next_y < 0 || next_y >= N)
            {
                continue;
            }

            if (chess[next_x][next_y] == -1)
            {
                chess[next_x][next_y] = chess[cur_x][cur_y] + 1;
                q.push({next_x, next_y});
            }
        }
    }

    return -1;
}

int main()
{
    cin >> T;

    while (T--)
    {
        cin >> N;
        int start_x, start_y;
        int end_x, end_y;
        cin >> start_x >> start_y;
        cin >> end_x >> end_y;

    
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                chess[i][j] = -1;
            }
        }

        int res = BFS(start_x, start_y, end_x, end_y);
        cout << res << "\n";
    }

    return 0;
}
