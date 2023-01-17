#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int map[25][25] = { 0 };
bool visited[25][25] = { 0 };

int N;

int dx[4] = {1,-1,0,0}; //x좌표 이동 
int dy[4] = {0,0,1,-1}; //y좌표 이동
int label = 1; // 총 단지 수
vector<int>result;
int house = 0; //단지 별 집 개수

void dfs(int y, int x)
{
	visited[y][x] = true;
	map[y][x] = label;
	house++;
	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx <0 || nx >= N || ny < 0 || ny >= N) continue;
		if (map[ny][nx] && !visited[ny][nx])
		{
			dfs(ny, nx);
			
		}
	}
}


int main(void)
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		string input;
		cin >> input;

		for (int j = 0; j < N; j++)
		{
			map[i][j] = input.at(j) - '0';
		}
	}


	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (!visited[i][j] && map[i][j]==1)
			{
				dfs(i, j);
				label++;
				result.push_back(house);
				house = 0;
			}
		}
	}
	sort(result.begin(), result.end());

	cout << label - 1 << endl;
	for (int i = 0; i < result.size(); i++)
		cout << result[i] << endl;
}
