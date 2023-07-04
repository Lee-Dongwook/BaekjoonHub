#include <iostream>
#include <queue>
using namespace std;

int dx[4] = {-1, 1, 0, 0}; // 상하좌우 x좌표
int dy[4] = {0, 0, -1, 1}; // 상하좌우 y좌표

int BFS(int** board, bool** isvisited, int M, int N, int x, int y)
{
    int count = 0;
    queue<pair<int, int>> q;
    q.push(make_pair(x, y));
    isvisited[x][y] = true;

    while (!q.empty())
    {
        int cur_x = q.front().first;
        int cur_y = q.front().second;
        q.pop();

        count++;

        for (int i = 0; i < 4; i++)
        {
            int next_x = cur_x + dx[i];
            int next_y = cur_y + dy[i];

            if (next_x >= 0 && next_x < M && next_y >= 0 && next_y < N)
            {
                if (board[next_x][next_y] == 1 && !isvisited[next_x][next_y])
                {
                    q.push(make_pair(next_x, next_y));
                    isvisited[next_x][next_y] = true;
                }
            }
        }
    }

    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;

    while (T--)
    {
        int M, N, K;
        cin >> M >> N >> K;

        int** board = new int*[M];
        bool** isvisited = new bool*[M];
        for (int i = 0; i < M; i++)
        {
            board[i] = new int[N];
            isvisited[i] = new bool[N];
            for (int j = 0; j < N; j++)
            {
                board[i][j] = 0;
                isvisited[i][j] = false;
            }
        }

        while (K--)
        {
            int x, y;
            cin >> x >> y;
            board[x][y] = 1;
        }

        int result = 0;

        for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (board[i][j] == 1 && !isvisited[i][j])
                {
                    BFS(board, isvisited, M, N, i, j);
                    result++;
                }
            }
        }

        cout << result << "\n";

        for (int i = 0; i < M; i++)
        {
            delete[] board[i];
            delete[] isvisited[i];
        }
        delete[] board;
        delete[] isvisited;
    }

    return 0;
}
