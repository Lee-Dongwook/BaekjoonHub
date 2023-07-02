#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<char>> vec;
vector<int> res;
string WB[8] = {
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW"
};
string BW[8] = {
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB"
};

int WBnumber(int x, int y)
{
    int cnt = 0;
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            if(vec[x+i][y+j] != WB[i][j])
                cnt++;
        }

    }
    return cnt;
}

int BWnumber(int x, int y)
{
    int cnt = 0;
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            if(vec[x+i][y+j] != BW[i][j])
                cnt++;
        }

    }
    return cnt;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int N,M;
    cin>>N>>M;
    
    vec.resize(N, vector<char>(M));
    
    for(int i=0;i<N;i++)
    {
        for(int j = 0; j < M ; j++)
        {
            cin>>vec[i][j];
        }
    }
    
    for(int i = 0; i <= N - 8; i++)
    {
        for(int j = 0; j <= M - 8; j++)
        {
            int tmp;
            tmp = min(WBnumber(i,j),BWnumber(i,j));
            res.push_back(tmp);
        }
    }
    
    sort(res.begin(),res.end());
    
    cout << res[0];
    return 0;
}