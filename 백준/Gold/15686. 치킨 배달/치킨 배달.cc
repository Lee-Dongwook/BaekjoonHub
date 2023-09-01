#include <bits/stdc++.h>
#define MAX 54
#define INF 987654321
using namespace std;

int N, M;
int m[MAX][MAX];

int result = INF;

vector<vector<int>> chickenList;

vector<pair<int, int>> home, chicken;

void combination(int start, vector<int> vec)
{
    if (vec.size() == M)
    {
        chickenList.push_back(vec);
        return;
    }

    for (int i = start + 1; i < chicken.size(); i++)
    {
        vec.push_back(i);
        combination(i, vec);
        vec.pop_back();
    }
}

int main()
{
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> m[i][j];
            if (m[i][j] == 1)
                home.push_back({i, j});
            if (m[i][j] == 2)
                chicken.push_back({i, j});
        }
    }

    vector<int> vec;
    combination(-1, vec);

    for (vector<int> cList : chickenList)
    {
        int total_result = 0; 
        for (pair<int, int> h : home)
        {
            int min_result = INF;
            for (int c : cList)
            {
                int distance = abs(h.first - chicken[c].first) + abs(h.second - chicken[c].second);
                min_result = min(min_result, distance);
            }
            total_result += min_result; 
        }
        result = min(result, total_result); 
    }

    cout << result << '\n';
    return 0;
}
