#include <iostream>
#include <vector>
#include <algorithm>
#define MAX_NUM 100000
using namespace std;

int DP[101][100001];
vector<pair<int,int>> vec;

bool cmp(pair<int,int> a, pair<int,int> b)
{
    return a.first < b.first;  // 무게가 낮은 순으로 정렬
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int N, K;
    cin >> N >> K;
    vec.resize(N);
    
    for(int i = 0; i < N; i++)
    {
        int W, V;
        cin >> W >> V;
        
        vec[i] = make_pair(W, V);
    }
    
    sort(vec.begin(), vec.end(), cmp);
    
    for(int i = 0; i <= K; i++)
    {
        DP[0][i] = 0;
    }
    for(int i = 0; i <= N; i++)
    {
        DP[i][0] = 0;
    }
    
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= K; j++)
        {
            if(vec[i-1].first > j)
            {
                DP[i][j] = DP[i-1][j];
            }
            else
            {
                DP[i][j] = max(DP[i-1][j], vec[i-1].second + DP[i-1][j - vec[i-1].first]);
            }
        }
    }
    
    cout << DP[N][K];
    
    return 0;
}
