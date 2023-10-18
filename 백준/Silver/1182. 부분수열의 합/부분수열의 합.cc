#include <iostream>
#include <vector>
using namespace std;

vector<int> vec;
vector<vector<int>> result;
int ans = 0;

void combination(int start, vector<int> v, int size)
{
    if(v.size() == size)
    {
        result.push_back(v);
        return;
    }
    
    for(int i = start + 1; i < vec.size(); i++)
    {
        v.push_back(vec[i]);
        combination(i, v, size);
        v.pop_back();
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int N, S;
    cin>>N>>S;
    
    for(int i = 0; i < N; i++)
    {
        int num;
        cin>>num;
        
        vec.push_back(num);
    }
    
    vector<int> temp;
    for(int i = 1; i <= N; i++)
    {
      combination(-1, temp, i);
    }
    
    
    
   for(int i = 0; i < result.size(); i++)
   {
      int sum = 0;
      for(int j = 0; j < result[i].size(); j++)
      {
         sum += result[i][j];
      }
      
      if(sum == S)
      {
        ans += 1;
      }
      else{
        continue;
      }
   }
   
   cout<<ans;
    
    
    return 0;
}