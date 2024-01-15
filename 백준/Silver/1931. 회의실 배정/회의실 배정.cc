#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
int ans = 0;

vector<pair<int,int>> vec;

bool cmp (pair<int,int> a, pair<int,int> b)
{
    if(a.second == b.second) {
        return a.first < b.first;
    }
    
    return a.second < b.second;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N;
    
    for(int i = 0; i < N; i++)
    {
        int start, end;
        cin >> start >> end;
        
        vec.push_back(make_pair(start, end));
    }
    
    sort(vec.begin(), vec.end(), cmp);
    
    int endTime = vec[0].second;
    ans += 1;
    
    for(int i = 1; i <= N ; i++) {
      if(vec[i].first >= endTime) {
          ans += 1;
          endTime = vec[i].second;
      }
    }
    
   
    cout << ans;
   
    return 0;
}