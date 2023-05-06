#include <iostream>
#include <string>
#include <queue>
#define MAX 101

using namespace std;

int N, M;                       // 미로 크기
int map[MAX][MAX];             // 미로 표현용 2차원 배열
int visited[MAX][MAX];          // 방문 기록용 2차원 배열
int check[MAX][MAX];             // 이동칸 기록용 2차원 배열

int dx[4] = { -1, 1, 0, 0 };   // 상하좌우 x축 
int dy[4] = { 0, 0, -1, 1 };   // 상하좌우 y축 

queue<pair<int, int> > q;        // queue에 탐색 기록

void bfs(int start_x, int start_y) {

	visited[start_x][start_y] = 1;          
	q.push(make_pair(start_x, start_y));     
	check[start_x][start_y]++;               

	while (!q.empty()) {

		int x = q.front().first;
		int y = q.front().second;

	
		q.pop();

		
		for (int i = 0; i < 4; ++i) {

			
			int next_x = x + dx[i];
			int next_y = y + dy[i];

			// 인접한 좌표가  미로 내에 존재하는지, 방문한 적이 없는지, 이동이 가능한지 확인
			if ((0 <= next_x && next_x < N) && (0 <= next_y && next_y < M)
				&& !visited[next_x][next_y] && map[next_x][next_y] == 1) {

				visited[next_x][next_y] = 1;              
				q.push(make_pair(next_x, next_y));        
				check[next_x][next_y] = check[x][y] + 1;   
			}
		}
	}
}

int main() {

	cin >> N >> M;                      // 미로 크기 입력

	for (int i = 0; i < N; ++i) {            // 미로 입력

		string row;                     // 행 입력
		cin >> row;

		for (int j = 0; j < M; ++j) {        // 행 별 좌표값 저장
			map[i][j] = row[j] - '0';    // 행 별 좌표값들은 문자 형태이기 때문에, 숫자로 변환
		}
	}

	bfs(0, 0);                          // 미로 탐색 시작

	cout << check[N - 1][M - 1];             // 도착 좌표까지의 거리 출력
}
